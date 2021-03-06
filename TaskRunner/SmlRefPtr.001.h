#pragma once

#include <functional>
#include <atomic>
#include <cassert>

namespace SmartLib
{
	using namespace ::std;

	template<typename START = function<void()> >
	class ScopeStart
	{
	public:
		ScopeStart(START&& start)
		{
			if (start)
			{
				start();
			}
		}
	};

	template<typename DISPOSE = function<void()> >
	class ScopeResource
	{
	private:
		DISPOSE _dispose;
		bool _enabled{ true };

	public:
		ScopeResource(DISPOSE&& dispose) :
			_dispose{static_cast<DISPOSE&&>(dispose)}
		{
		}

		ScopeResource(DISPOSE& dispose) :
			_dispose{ dispose }
		{
		}

		~ScopeResource()
		{
			if (_enabled)
			{
				_dispose();
				_enabled = false;
			}
		}

		void Invoke()
		{
			if (_enabled)
			{
				_dispose();
				_enabled = false;
			}
		}

		void Enable()
		{
			_enabled = true;
		}

		void Disable()
		{
			_enabled = false;
		}
	};


	template<typename T, typename DISPOSE = function<void(T&)>, typename ATOMIC = atomic<long> >
	class RefPtr
	{
	public:
		//template<typename T, typename DISPOSE = function<void(T&)>, typename ATOMIC = atomic<long> >
		struct ObjectBlock
		{
		private:
			T _obj{};
			T* _cookie{ nullptr };
			typename ATOMIC _refcount{ 1 };
			typename ATOMIC _weakRefcount{ 0 };
			typename DISPOSE _dispose;

		private:
			static constexpr long ObjOffset()
			{
				constexpr static ObjectBlock* const base = nullptr;
				return ((char*)(&base->_obj) - (char*)(base));
			}

		public:
			static ObjectBlock* ContainingRecord(T* obj)
			{
				ObjectBlock* ptr = (ObjectBlock*)((char*)obj + ObjOffset());
				assert(ptr->IsValid());
				return ptr;
			}

		private:
			//////////////////////////////////////////////////////////////////////////
			ObjectBlock(const ObjectBlock& other) = delete;
			ObjectBlock(ObjectBlock&& other) = delete;
			const ObjectBlock& operator=(const ObjectBlock& other) = delete;
			const ObjectBlock& operator=(ObjectBlock&& other) = delete;

		public:
			//////////////////////////////////////////////////////////////////////////
			template<typename ... TARGS>
			static ObjectBlock* Make(TARGS&& ... args)
			{
				return new ObjectBlock{ static_cast<TARGS&&>(args) ... };
			}


			template<typename... TARGS>
			ObjectBlock(TARGS&& ... args) :
				_obj{ static_cast<TARGS&&>(args)... },
				_cookie{ &_obj },
				_refcount{ 1 },
				_weakRefcount{ 0 }
			{
			}

			//////////////////////////////////////////////////////////////////////////
			template<typename TDispose>
			void SetDispose(TDispose&& dispose)
			{
				_dispose = static_cast<TDispose&&>(dispose);
			}

			~ObjectBlock()
			{
				if (_dispose)
				{
					_dispose(_obj);
					_dispose = nullptr;
				}
			}

			//////////////////////////////////////////////////////////////////////////
			T& Ref()
			{
				return _obj;
			}

			T* Ptr()
			{
				return &_obj;
			}

			//////////////////////////////////////////////////////////////////////////
			long AddRef()
			{
				return ++_refcount;
			}

			long Release()
			{
				long ref = --_refcount;


				if (0 == ref) //dispose early
				{
					if (_dispose)
					{
						_dispose(_obj);
						_dispose = nullptr;
					}
				}

				if (0 == ref &&  0 == _weakRefcount)
				{
					delete this;
				}
				return ref;
			}

			long RefCount() const
			{
				return _refcount;
			}

			//////////////////////////////////////////////////////////////////////////
			long WeakAddRef()
			{
				return ++_weakRefcount;
			}

			long WeakRelease()
			{
				long ref = --_weakRefcount;
				if (0 == ref && 0 == _refcount)
				{
					delete this;
				}
				return ref;
			}

			long WeakRefCount() const
			{
				return _weakRefcount;
			}

			//////////////////////////////////////////////////////////////////////////
			bool IsValid() const
			{
				return _cookie == &_obj;
			}
		};

	private:
		ObjectBlock* _objBlockPtr{ nullptr };

	private:
		RefPtr(ObjectBlock* blockPtr) :
			_objBlockPtr{ blockPtr }
		{
		}

	public:
		//////////////////////////////////////////////////////////////////////////
		template<typename ... TAGRS>
		static RefPtr Make(TAGRS&& ... args)
		{
			ObjectBlock* blockPtr = ObjectBlock::Make(static_cast<TAGRS&&>(args)...);
			return RefPtr{ blockPtr };
		}

		template<typename TDispose>
		void SetDispose(TDispose&& dispose)
		{
			assert(_objBlockPtr);
			_objBlockPtr->SetDispose(static_cast<TDispose&&>(dispose));
		}

		~RefPtr()
		{
			if (_objBlockPtr)
			{
				_objBlockPtr->Release();
				_objBlockPtr = nullptr;
			}
		}
		
		//////////////////////////////////////////////////////////////////////////
		RefPtr() :
			_objBlockPtr{ nullptr }
		{
		}


		RefPtr(RefPtr&& other) :
			_objBlockPtr{ other._objBlockPtr }
		{
			other._objBlockPtr = nullptr;
		}


		RefPtr(const RefPtr& other) :
			_objBlockPtr{ other._objBlockPtr }
		{
			if (_objBlockPtr)
			{
				_objBlockPtr->AddRef();
			}
		}

		RefPtr(T* other) //T* other must be dettached or nullptr
		{
			Attach(other);
		}

		//////////////////////////////////////////////////////////////////////////
		const RefPtr& operator=(RefPtr&& other)
		{
			if (this != &other) //correct!! no need to move from self to self
			{
				if (_objBlockPtr)
				{
					_objBlockPtr->Release();
				}
				_objBlockPtr = other._objBlockPtr;
				other._objBlockPtr = nullptr;
			}

			return *this;
		}

		const RefPtr& operator=(const RefPtr& other)
		{
			if (_objBlockPtr != other._objBlockPtr) //correct!! no need to assign if they point to same object
			{
				if (_objBlockPtr)
				{
					_objBlockPtr->Release();
				}
				_objBlockPtr = other._objBlockPtr;
				if (_objBlockPtr)
				{
					_objBlockPtr->AddRef();
				}
			}

			return *this;
		}

		const RefPtr& operator=(T* other) //T* other must be dettached or nullptr
		{
			Attach(other);
			return *this;
		}


		//////////////////////////////////////////////////////////////////////////
		T* Detach()
		{
			T* ret = _objBlockPtr ? _objBlockPtr->Ptr() : nullptr;
			_objBlockPtr = nullptr;
			return ret;
		}

		void Attach(T* obj)
		{
			if (nullptr == obj)
			{
				if (_objBlockPtr)
				{
					_objBlockPtr->Release();
					_objBlockPtr = nullptr;
				}
			}
			else
			{
				ObjectBlock* blockPtr = ObjectBlock::ContainingRecord(obj);
				if (_objBlockPtr != blockPtr)
				{
					if (_objBlockPtr)
					{
						_objBlockPtr->Release();
					}
					_objBlockPtr = blockPtr;
				}
			}
			
		}

		//////////////////////////////////////////////////////////////////////////
		T& Ref()
		{
			assert(_objBlockPtr);
			return _objBlockPtr->Ref();
		}

		T* Ptr()
		{
			return _objBlockPtr ? _objBlockPtr->Ptr() : nullptr;
		}

		//////////////////////////////////////////////////////////////////////////
		operator T* ()
		{
			return _objBlockPtr ? _objBlockPtr->Ptr() : nullptr;
		}

		T* operator->()
		{
			return _objBlockPtr ? _objBlockPtr->Ptr() : nullptr;
		}

		//////////////////////////////////////////////////////////////////////////
		bool operator==(const RefPtr& other)
		{
			return _objBlockPtr == other._objBlockPtr;
		}

		bool operator!=(const RefPtr& other)
		{
			return _objBlockPtr != other._objBlockPtr;
		}

		bool operator==(T* other)
		{
			return Ptr() == other;
		}

		bool operator!=(T* other)
		{
			return Ptr() != other;
		}


		//////////////////////////////////////////////////////////////////////////
		class Weak
		{
		private:
			ObjectBlock* _sharedObjBlockPtr{ nullptr };

		public:

			Weak()
			{

			}

			Weak(RefPtr& shared) :
				_sharedObjBlockPtr{shared._objBlockPtr}
			{
				if (_sharedObjBlockPtr)
				{
					_sharedObjBlockPtr->WeakAddRef();
				}
			}


			Weak(Weak& other) :
				_sharedObjBlockPtr{other._sharedObjBlockPtr }
			{
				if (_sharedObjBlockPtr)
				{
					_sharedObjBlockPtr->WeakAddRef();
				}
			}

			Weak(Weak&& other) :
				_sharedObjBlockPtr{ other._sharedObjBlockPtr }
			{
				other._sharedObjBlockPtr = nullptr;
			}

			~Weak()
			{
				if (_sharedObjBlockPtr)
				{
					_sharedObjBlockPtr->WeakRelease();
					_sharedObjBlockPtr = nullptr;
				}
			}

			//////////////////////////////////////////////////////////////////////////
			const Weak& operator=(Weak&& other)
			{
				if (this != &other) //correct!! no need to move from self to self
				{
					if (_sharedObjBlockPtr)
					{
						_sharedObjBlockPtr->WeakRelease();
					}
					_sharedObjBlockPtr = other._sharedObjBlockPtr;
					other._sharedObjBlockPtr = nullptr;
				}

				return *this;
			}

			const Weak& operator=(const Weak& other)
			{
				if (_sharedObjBlockPtr != other._sharedObjBlockPtr) //correct!! no need to assign if they point to same object
				{
					if (_sharedObjBlockPtr)
					{
						_sharedObjBlockPtr->WeakRelease();
					}
					_sharedObjBlockPtr = other._sharedObjBlockPtr;
					if (_sharedObjBlockPtr)
					{
						_sharedObjBlockPtr->WeakAddRef();
					}
				}

				return *this;
			}


			const Weak operator=(RefPtr& shared)
			{
				if (_sharedObjBlockPtr)
				{
					_sharedObjBlockPtr->WeakRelease();
				}
				_sharedObjBlockPtr = shared._objBlockPtr;
				if (_sharedObjBlockPtr)
				{
					_sharedObjBlockPtr->WeakAddRef();
				}
				return *this;
			}

			RefPtr lock()
			{
				if (_sharedObjBlockPtr && 0 != _sharedObjBlockPtr->RefCount())
				{
					_sharedObjBlockPtr->AddRef();
					return RefPtr{ _sharedObjBlockPtr->Ptr() };
				}

				return RefPtr{};
			}
		};
	};
}