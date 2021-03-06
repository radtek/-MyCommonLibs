#pragma once

#include <string>
#include <iostream>

#include <tchar.h>
#include <windows.h>
#include <atlbase.h>
#include <atlstr.h>

#include "SmlRefPtr.h"
#include "SmlVector.h"

namespace SmartLib
{
	using namespace ::std;

	class MyRCObj
	{
		static long& Id()
		{
			static long id = 0;
			return id;
		}

		std::string _str;
		long _id;
	public:

		static long& CtorCount()
		{
			static long count = 0;
			return count;
		}


		static long& DtorCount()
		{
			static long count = 0;
			return count;
		}

		MyRCObj(const std::string& str) :
			_str(str),
			_id(++Id())
		{
			++CtorCount();
			//SML_LOG_LINE(TEXT("ctor of [%d, %S]"), _id, _str.c_str());
		}

		~MyRCObj()
		{
			++DtorCount();
			//SML_LOG_LINE(TEXT("detor of [%d, %S]"), _id, _str.c_str());
		}

		void Print()
		{
			//SML_LOG_LINE(TEXT("I am [%d, %S]"), _id, _str.c_str());
		}
	};

	class RefPtrTest
	{
	public:

		struct MyObj
		{
		private:
			static inline int _count{ 0 };
		private:
			string _str;
		public:
			MyObj()
			{
				_str = to_string(++_count);
				cout << "constructror: " << _str << endl;
			}


			MyObj(long val1, long val2)
			{
				_str = to_string(++_count);
				cout << "constructror: " << val1 << " "  << val2 << " " << _str << endl;
			}

			~MyObj()
			{
				cout << "destructor: " << _str << endl;
			}


			void Print()
			{
				cout << _str << endl;
			}
		};

		static void Case12()
		{
			RefPtr<MyObj> sp{ RefPtrMakeTag{}, 100, 200 };
			sp->Print();
		}

		static void Case11()
		{
			struct MyStruct
			{
				MyObj obj;
				//RefPtr<MyStruct> self;
				weak_ptr<MyStruct> self;


				~MyStruct()
				{
					return;
				}

			};


			{
				shared_ptr<MyStruct> sp = make_shared<MyStruct>();
				sp->self = sp;
			}


		}

		static void Case10()
		{
			struct Partner
			{
				//MyObj _obj;
				weak_ptr<Partner>_partner;


				~Partner()
				{
					cout << __FUNCTION__ << endl;
				}
			};


			shared_ptr<Partner> person1 = make_shared<Partner>();
			shared_ptr<Partner> person2 = make_shared<Partner>();

			person1->_partner = person2;
			person2->_partner = person1;
		}


		static void Case9()
		{
			struct Partner 
			{
				MyObj _obj;
				RefPtr<Partner>::Weak _partner;


				~Partner()
				{
					cout << __FUNCTION__ << endl;
				}
			};


			RefPtr<Partner> person1 = RefPtr<Partner>::Make();
			RefPtr<Partner> person2 = RefPtr<Partner>::Make();

			person1->_partner = person2;
			person2->_partner = person1;
		}

		static void Case8()
		{

			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyObj> shared1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> shared2 = RefPtr<MyObj>::Make();
				RefPtr<MyObj>::Weak w1{ shared1 };
				RefPtr<MyObj>::Weak w2{ shared2 };
				w2 = move(w1);
			}


			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyObj> shared1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> shared2 = RefPtr<MyObj>::Make();
				RefPtr<MyObj>::Weak w1{ shared1 };
				RefPtr<MyObj>::Weak w2{ shared2 };
				w2 = w1;
			}

			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyObj> shared = RefPtr<MyObj>::Make();
				RefPtr<MyObj>::Weak w1{ shared };
				RefPtr<MyObj>::Weak w2{ shared };
				w2 = move(w1);
			}


			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyObj> shared = RefPtr<MyObj>::Make();
				RefPtr<MyObj>::Weak w1{ shared };
				RefPtr<MyObj>::Weak w2{ shared };
				w2 = w1;
			}

			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyObj> shared = RefPtr<MyObj>::Make();
				RefPtr<MyObj>::Weak w1{ shared };
				RefPtr<MyObj>::Weak w2{ move(w1) };
			}
			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyObj> shared = RefPtr<MyObj>::Make();
				RefPtr<MyObj>::Weak w1{ shared };
				RefPtr<MyObj>::Weak w2{ w1 };
			}
			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyObj>::Weak weak;
				{
					RefPtr<MyObj> shared = RefPtr<MyObj>::Make();
					weak = shared;

					auto shared1 = weak.lock();
					assert(!!shared1);
				}

				auto shared2 = weak.lock();
				assert(!shared2);
			}
			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyObj> shared = RefPtr<MyObj>::Make();
				RefPtr<MyObj>::Weak weak{ shared };
			}
			

		}


		class ScopeTest
		{
		private:
			string _str;

			ScopeStart<> _ss_str{ [this]()
			{
				cout << _str << " started" << endl;
			} };

			ScopeResource<> _sr_str{ [this]()
			{
				cout << _str << " disposed" << endl;
			} };

		public:
			ScopeTest(const char* str) :
				_str{str? str : ""}
			{
			}
		};

		

		static void Case7()
		{
			ScopeTest st{ "hello" };
			return;
		}

		static void Case6()
		{
			RefPtr<MyObj> sp1 = RefPtr<MyObj>::Make();
			RefPtr<MyObj> sp2 = RefPtr<MyObj>::Make();

			assert(sp1 != sp2);

			sp1 = sp2;
			assert(sp1 == sp2);

			assert(sp1 != nullptr);

			sp1 = nullptr;
			assert(sp1 == nullptr);
		}


		static void Case5()
		{
			{
				RefPtr<MyObj> sp1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> sp2{sp1.Detach()};
				//sp1 = sp2.Detach();
			}

			{
				RefPtr<MyObj> sp1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> sp2{ (MyObj*)nullptr };
				//sp1 = sp2.Detach();
			}


			{
				RefPtr<MyObj> sp1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> sp2 = RefPtr<MyObj>::Make();

				sp1 = sp2.Detach();
			}
			

			{
				RefPtr<MyObj> sp1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> sp2 = RefPtr<MyObj>::Make();

				sp1.Attach(sp2.Detach());
			}


			{
				RefPtr<MyObj> sp1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> sp2 = RefPtr<MyObj>::Make();

				sp1.Attach(nullptr);
			}

			{
				RefPtr<MyObj> sp1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> sp2 = RefPtr<MyObj>::Make();

				sp1 = nullptr;
			}


			{
				RefPtr<MyObj> sp1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> sp2 = RefPtr<MyObj>::Make();

				sp1.Attach(sp1.Ptr());
			}

			{
				RefPtr<MyObj> sp1 = RefPtr<MyObj>::Make();
				RefPtr<MyObj> sp2 = RefPtr<MyObj>::Make();

				sp1 = sp1.Ptr();
			}
		}

		static void Case4()
		{
			struct MyStruct
			{
				MyObj obj;
				//RefPtr<MyStruct> self;
				RefPtr<MyStruct>::Weak self;


				~MyStruct()
				{
					cout << __FUNCTION__ << endl;
				}

			};


			{
				RefPtr<MyStruct> sp = RefPtr<MyStruct>::Make();
				sp->self = sp;
			}

			
		}

		static void Case3()
		{
			MyObj* p = nullptr;
			MyObj* p1 = nullptr;

			{
				p = new MyObj{};
				ScopeResource sp{ [&p]()
				{
					if (p)
					{
						delete p;
						p = nullptr;
					}
				} };



				p1 = new MyObj{};

				auto disp = [&p1]()
				{
					if (p1)
					{
						delete p1;
						p1 = nullptr;
					}
				};
				ScopeResource sp1{ disp };
			}


			assert(nullptr == p);
			assert(nullptr == p1);

			return;
		}

		static void Case2()
		{
			RefPtr<MyRCObj>::ObjectBlock ob1{"111"};
			RefPtr<MyRCObj>::ObjectBlock ob2{"222"};
			RefPtr<MyRCObj>::ObjectBlock ob3{ "333" };

			//ob2 = ob1;
			//ob3 = move(ob3);

		}
		
		static void Case1()
		{
			{
				Vector<RefPtr<string>, true, 4> vec;
				string temp{ "hello, this is a long strong .................$$$$$" };
				RefPtr<string> sp1 = RefPtr<string>::Make(temp);

				RefPtr<string> sp2;
				sp2 = sp1;
				sp2 = sp1;
				sp2 = move(sp2);
			}


			{
				Vector<RefPtr<string>, true, 4> vec;
				string temp{ "hello, this is a long strong .................$$$$$" };
				RefPtr<string> sp1 = RefPtr<string>::Make(move(temp));

				RefPtr<string> sp2;
				sp2 = sp1;
				sp2 = sp1;
				sp2 = move(sp2);
			}

			{
				Vector<RefPtr<string>, true, 4> vec;
				string temp{ "hello, this is a long strong .................$$$$$" };
				RefPtr<string> sp1 = RefPtr<string>::Make(move(temp));

				RefPtr<string> sp2;
				sp2 = sp1;
				sp2 = sp1;
				sp2 = move(sp1);
			}
			{
				Vector<RefPtr<string>, true, 4> vec;
				string temp{ "hello, this is a long strong .................$$$$$" };
				RefPtr<string> sp1 = RefPtr<string>::Make(move(temp));
				for (long ii = 0; ii < 100; ++ ii)
				{
					vec.push_back(sp1);
				}

				while (vec.size())
				{
					vec.pop_back();
				}
			}
			{
				string temp{"hello, this is a long strong .................$$$$$"};
				RefPtr<string> sp1 = RefPtr<string>::Make(move(temp));
				RefPtr<string> sp2;
				sp2 = sp1;
				sp2 = sp1;
				sp2 = sp1;
			}
			{
				auto dispose = [](WCHAR*& data)
				{
					::free(data);
					data = nullptr;
				};
				const long BUFFER_SIZE = 100;
				RefPtr<WCHAR*>::ObjectBlock obj{ (WCHAR*)malloc(100 * sizeof(WCHAR)) };
				obj.SetDispose(dispose);
				_tcscpy_s(obj.Ref(), BUFFER_SIZE, TEXT("hello world"));
				//SML_LOG_LINE(TEXT("%s"), obj.Ref());
			}


			{
				//////////////////////////////////////////////////////////////////////////
				auto dispose = [](WCHAR*& data)
				{
					::free(data);
					data = nullptr;
				};
				const long BUFFER_SIZE = 100;
				RefPtr<WCHAR*>::ObjectBlock obj{(WCHAR*)malloc(100 * sizeof(WCHAR))};
				obj.SetDispose(dispose);
				_tcscpy_s(obj.Ref(), BUFFER_SIZE, TEXT("hello world"));
				//SML_LOG_LINE(TEXT("%s"), obj.Ref());
			}
		}
		static void Case0()
		{
			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyRCObj> sp1 = RefPtr<MyRCObj>::Make(std::string{ "hello world!" });
				RefPtr<MyRCObj> sp2{ sp1 };
			}

			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyRCObj> sp1;
				sp1 = RefPtr<MyRCObj>::Make(std::string{ "hello world!" });
				RefPtr<MyRCObj> sp2;
				sp2 = sp1;
			}

			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyRCObj> sp1 = RefPtr<MyRCObj>::Make(std::string{ "hello world!" });
				RefPtr<MyRCObj> sp2 = RefPtr<MyRCObj>::Make(std::string{ "hello world!" });
				sp1 = sp2;
			}

			//////////////////////////////////////////////////////////////////////////
			{
				RefPtr<MyRCObj> sp1 = RefPtr<MyRCObj>::Make(std::string{ "hello world!" });
				RefPtr<MyRCObj> sp2 = RefPtr<MyRCObj>::Make(std::string{ "hello world!" });
				sp1.Attach(sp2.Detach());
			}

			{
				RefPtr<MyRCObj> sp1{ RefPtr<MyRCObj>::Make(std::string{ "hello world!" }) };
				sp1->Print();
				(*sp1).Print();
			}

			{
				RefPtr<MyRCObj> sp1{ RefPtr<MyRCObj>::Make(std::string{ "hello world!" }) };
				sp1.Attach(nullptr);
			}

			if (MyRCObj::CtorCount() == MyRCObj::DtorCount())
			{
				//SML_LOG_LINE(TEXT("test passed, ctor and dtor count is %d"), MyObj::CtorCount());
			}
			else
			{
				//SML_LOG_LINE(TEXT("test fail, ctor count is %d but dtor count is %d"), MyObj::CtorCount(), MyObj::DtorCount());
			}


			{
				CString fileName = TEXT("f:\\000-test-refptr.txt");
				HANDLE hfile = ::CreateFile(
					fileName.GetString(),//_In_      LPCTSTR lpFileName,
					GENERIC_ALL,//_In_      DWORD dwDesiredAccess,
					0,//_In_      DWORD dwShareMode,
					nullptr,//_In_opt_  LPSECURITY_ATTRIBUTES lpSecurityAttributes,
					CREATE_ALWAYS,//_In_      DWORD dwCreationDisposition,
					0,//_In_      DWORD dwFlagsAndAttributes,
					nullptr//,//_In_opt_  HANDLE hTemplateFile
				);

				auto delfile = [](CString& file)
				{
					::DeleteFile(file.GetString());
				};
				RefPtr<CString> spdelfile{ RefPtr<CString>::Make(fileName.GetString()) };
				spdelfile.SetDispose(delfile);

				auto dispose = [](HANDLE& h)
				{
					::CloseHandle(h);
					h = INVALID_HANDLE_VALUE;
				};
				RefPtr<HANDLE> sp1 = RefPtr<HANDLE>::Make(hfile);
				sp1.SetDispose(dispose);
				RefPtr<HANDLE> sp2 = sp1;
				RefPtr<HANDLE> sp3;
				sp3 = sp1;
			}


			{
				auto dispose = [](char*& data)
				{
					if (data)
					{
						::free(data);
						data = nullptr;
					}
				};


				const long BUFFER_SIZE = 100;
				RefPtr<char*> sp1 = RefPtr<char*>::Make((char*)::malloc(BUFFER_SIZE));
				sp1.SetDispose(dispose);

				strcpy_s(sp1.Ref(), BUFFER_SIZE, "hello world");
				//SML_LOG_LINE(TEXT("%S"), sp1.Ref());

			}
		}
	};
}