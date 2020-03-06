// TestBoost.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include "TestBoostAsio.h"
#include "TestCoroutine.h"


int _tmain(int argc, TCHAR ** argv)
{
	//LPCTSTR BOOT_BIN = TEXT("E:\\git-repo\\vcpkg\\installed\\x64-windows\\debug\\bin");
	//AddDllDirectory(BOOT_BIN);

	int testCase = 2;
	switch (testCase)
	{
	case 2:
	{
		Smartlib::TestCoro4::Provider();
	}
	break;
	case 1:
	{
		Smartlib::TestCoro3::Main();
		Smartlib::TestCoro2::Main();
		Smartlib::TestCoro1::Main();
	}
	break;
	case 0:
	{
		Smartlib::Server::Main();
	}
	break;
	default:
		break;
	}

    return 0;
}

