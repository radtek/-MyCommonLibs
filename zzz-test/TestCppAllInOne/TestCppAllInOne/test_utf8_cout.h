#pragma once


#include <tchar.h>
#include <windows.h>
#include <atlbase.h>
#include <atlstr.h>


#include <iostream>
#include <string>
#include <sstream>

#include "log.h"
#include "test_woss.h"

namespace SmartLib
{

	class AutoConsoleCodePage
	{
	private:
		UINT _oldcp{ 0 };
	public:
		AutoConsoleCodePage(UINT cp)
		{
			_oldcp = ::GetConsoleOutputCP();
			::SetConsoleOutputCP(cp);
		}

		~AutoConsoleCodePage()
		{
			::SetConsoleOutputCP(_oldcp);
		}
	};


	class UnivCout
	{
	private:
		std::ostream& _stdostream;

	public:

		UnivCout(char ot = 'o') :
			_stdostream(
				'o' == ot ? std::cout : 
				'e' == ot ? std::cerr :
				'l' == ot ? std::clog :
				std::cout)
		{
		}

		//template<typename T>
		//UnivCout& operator<<(T&& obj)
		//{
		//	_stdostream << std::forward<T>(obj);
		//	return *this;
		//}

		//template<>
		UnivCout& operator<<(std::ostream& (__cdecl* _Pfn)(std::ostream&))
		{ // call basic_ostream manipulator
			_stdostream << _Pfn;
			return *this;
		}

		//template<>
		UnivCout& operator<<(LPCWSTR wstr)
		{
			return operator<<(std::wstring{ wstr });
		}

		//template<>
		UnivCout& operator<<(const std::wstring& wstr)
		{
			std::string narrow;
			SmartLib::TestWOSS::W2N(CP_ACP, 0, wstr, narrow);
			_stdostream << narrow;
			return *this;
		}


		//template<>
		UnivCout& operator<<(LPCSTR str)
		{
			return operator<<(std::string{ str });
		}

		//template<>
		UnivCout& operator<<(const std::string& str)
		{
			std::string narrow;
			std::wstring wide;
			SmartLib::TestWOSS::N2N(CP_UTF8, MB_ERR_INVALID_CHARS, str, CP_ACP, 0, narrow, wide);
			if (wide.size())
			{
				_stdostream << narrow;
			}
			else
			{
				_stdostream << str;
			}

			return *this;
		}

#ifndef UNIVCOUT_SUPPORTED_TYPE
#define UNIVCOUT_SUPPORTED_TYPE(type) \
		UnivCout& operator<<(type val) \
		{ \
			_stdostream << val; \
			return *this; \
		}
#endif

		UNIVCOUT_SUPPORTED_TYPE(CHAR);
		UNIVCOUT_SUPPORTED_TYPE(UCHAR);
		UNIVCOUT_SUPPORTED_TYPE(SHORT);
		UNIVCOUT_SUPPORTED_TYPE(USHORT);
		UNIVCOUT_SUPPORTED_TYPE(INT);
		UNIVCOUT_SUPPORTED_TYPE(UINT);
		UNIVCOUT_SUPPORTED_TYPE(LONGLONG);
		UNIVCOUT_SUPPORTED_TYPE(ULONGLONG);
		UNIVCOUT_SUPPORTED_TYPE(float);
		UNIVCOUT_SUPPORTED_TYPE(double);
		UNIVCOUT_SUPPORTED_TYPE(long double);

	};


	class UniOut : public std::ostream
	{
	private:
		std::ostream& _out;
	public:
		UniOut(std::ostream & out) :
			std::ostream(out.rdbuf()),
			_out(out)
		{
		}

		UniOut& operator<<(LPCSTR str)
		{
			_out << str << "hello" << std::endl;
			return *this;
		}


		operator std::ostream& ()
		{
			return *this;
		}
	};
	class TestUtf8Cout
	{
	public:
		static void Case3()
		{
			//UniOut uniout(std::cout);
			//uniout << "good";
			//uniout << std::endl;
			std::cout << std::endl;
			UnivCout uout;
			uout << std::endl;
			uout << L"wwww我么是什么上帝就发上空的飞机wwww" << std::endl;
			uout << "aaaa我么是什么上帝就发上空的飞机aaaa" << std::endl;
			uout << u8"u8u8u8u8我么是什么上帝就发上空的飞机u8u8u8u8" << std::endl;
			uout << 123 << std::endl;
			uout << 456.789 << std::endl;
			uout << 456.789f << std::endl;
		}
		static void Case2()
		{
			std::wstringstream wss;
			wss << L"wwww我么是什么上帝就发上空的飞机wwww" << std::endl;
			wss << "aaaa我么是什么上帝就发上空的飞机aaaa" << std::endl;
			wss << u8"u8u8u8u8我么是什么上帝就发上空的飞机u8u8u8u8" << std::endl;
			wss << 123 << std::endl;
			wss << 456.789 << std::endl;

			std::wstring str = wss.str();

		}
		static BOOL CALLBACK EnumLocalesProcEx(
			_In_  LPWSTR lpLocaleString,
			_In_  DWORD dwFlags,
			_In_  LPARAM lParam
		)
		{
			SML_LOG_LINE(TEXT("%s"), lpLocaleString);
			return TRUE;
		}

		static BOOL CALLBACK EnumCodePagesProc(
			_In_  LPTSTR lpCodePageString
		)
		{
			//SML_LOG_LINE(TEXT("%s"), lpCodePageString);
			UINT cp = wcstoul(lpCodePageString, nullptr, 10);

			CPINFOEX CPInfoEx{ 0 };
			::GetCPInfoEx(
				cp,//_In_   UINT CodePage,
				0,//_In_   DWORD dwFlags,
				&CPInfoEx//,//_Out_  LPCPINFOEX lpCPInfoEx
			);
			SML_LOG_LINE(TEXT("%d - %s"), CPInfoEx.CodePage, CPInfoEx.CodePageName);

			return TRUE;
		}

		static void Case1()
		{
			SML_LOG_LINE(TEXT("EnumSystemLocalesEx:"));
			BOOL bret = ::EnumSystemLocalesEx(
				(LOCALE_ENUMPROCEX)(EnumLocalesProcEx),//_In_      LOCALE_ENUMPROCEX lpLocaleEnumProcEx,
				0,//_In_      DWORD dwFlags,
				0,//_In_      LPARAM lParam,
				nullptr//,//_In_opt_  LPVOID lpReserved
			);



			SML_LOG_LINE(TEXT("EnumSystemCodePages:"));
			bret = ::EnumSystemCodePages(
				(CODEPAGE_ENUMPROC)EnumCodePagesProc,//_In_  CODEPAGE_ENUMPROC lpCodePageEnumProc,
				0//,//_In_  DWORD dwFlags
			);

		}

		static void Case0()
		{
			std::string test = u8"Greek: αβγδ; German: Übergrößenträger@@@😀我们说的话附件是可以发的接口设计开发有@@@";
			std::cout << test << std::endl;

			//utoConsoleCodePage accp{CP_UTF8};
			AutoConsoleCodePage accp{ CP_UTF8 };
			std::cout << test << std::endl;
		}
	};
}