// testCpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <tchar.h>
#include <windows.h>
#include <atlbase.h>
#include <atlstr.h>

#include "TimeWait.h"
#include "TestThread.h"
#include "TestStdCV.h"
#include "TestFwd.h"
#include "TestTemplate.h"
#include "MaxIncSeq.h"
#include "testsprintf.h"
#include "GetWin32ErrorString.h"
#include "testUriChar.h"
#include "test_array_in_strut_addr.h"
#include "GetFileCreationRelativeFile.h"

int _tmain(int argc, TCHAR ** argv)
{
	//CString  str = TEXT("aaa%bbb%ccc%%ddd");
	//str.Replace(TEXT("%"), TEXT("%%"));

	//LPCTSTR sz = TEXT("!*'();:@&=+$,/?%#[]");
	//while (*sz)
	//{
	//	LOG_LINE(TEXT("%c <====> %d 0x%x"), *sz, (int)(*sz), (int)(*sz));
	//	++sz;
	//}

	LONG testCase = 0;
	if (argc > 1)
	{
		testCase = _tcstol(argv[1], nullptr, 10);
	}

	switch (testCase)
	{
	case 10:
	{
		return SmartLib::CGetFileCreationRelativeFile::GetFileCreationRelativeFile(argv[2]);
	}
	break;
	case 9:
	{
		SmartLib::test_array_in_strut_addr::Case0();
	}
	break;
	case 8:
	{
		//SmartLib::TestUriChar::IsXMLFile(argv[2]);
		SmartLib::TestUriChar::Case0();
	}
	break;
	case 7:
	{
		TestCpp::CWin32HelperTest::Case0();
	}
	break;
	case 6:
	{
		SmartLib::testsprintf::Case0();
	}
	break;
	case 5:
	{
		TestCpp::CMaxIncSeqTest::Case2();
		TestCpp::CMaxIncSeqTest::Case1();
		TestCpp::CMaxIncSeqTest::Case0();
	}
	break;
	case 4:
	{
		TestCpp::RemoveConstTest::Case0();
	}
	break;
	case 3:
	{
		TestCpp::TestFwd::Case1();
		TestCpp::TestFwd::Case0();
	}
	break;
	case 2:
	{
		TestCpp::CSimpleCircleBufferTest::Case0();
	}
	break;
	case 1:
	{
		SmartLib::CTestThreadCase::Case0();
	}
	break;
	case 0:
	{
		TestCpp::CTimerWait::OneByOne(TEXT("10.1.2.3"));
	}
	break;
	}
    return 0;
}

