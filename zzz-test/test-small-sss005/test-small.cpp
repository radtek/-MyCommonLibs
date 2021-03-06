// test-small.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <tchar.h>
#include <windows.h>
#include <atlbase.h>
#include <atlstr.h>

#include "testReadLine.h"
#include "TestUTF.h"
#include "LoadGetProc.h"
#include "UTfStringConv.h"
#include "testgoto.h"

int _tmain(int argc, TCHAR ** argv)
{
	int testCase = 5;
	switch (testCase)
	{
	case 5:
	{
		SmartLib::TestGoto::Case0();
	}
	break;
	case 4:
	{
		SmartLib::UTFStringConvTest::Case0();
	}
	break;
	case 3:
	{
		SmartLib::LoadGetProc::Do(argv[1], argv[2]);
	}
	break;
	case 2:
	{
		TestUTF::Case0();
	}
	break;
	case 1:
	{
		CTestReadLine::Case0(argc, argv);
	}
	break;
	case 0:
	{
		CHAR uc = 1;
		ULONG size = uc << 12;

		_ftprintf_s(stdout, TEXT("uc=%d, size=%d") TEXT("\r\n"), uc, size);
	}
	break;
	}
	
    return 0;
}

