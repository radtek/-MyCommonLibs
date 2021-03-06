// test-cpp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <tchar.h>
#include <windows.h>
#include <atlbase.h>
#include <atlstr.h>


#include "CommandLineParser.h"
#include "misc.h"
#include "PrintCommandLine.h"


//exe -case ## 
int _tmain(int argc, TCHAR ** argv)
{
	
	
	SmartLib::CCommandLineParser cmdParser;
	cmdParser.Parse(argc, argv);

	int testCase = _tcstol(cmdParser.GetCommandLine(TEXT("-case")).c_str(), nullptr, 10);


	switch (testCase)
	{
	case 1:
	{
		SmartLib::CPrintCommandLine::PintLine(argc, argv);
	}
	break;
	case 0:
	{
		SmartLib::CMisc::Case1();
		SmartLib::CMisc::Case0(argc, argv);
	}
	break;
	}
	
    return 0;
}

