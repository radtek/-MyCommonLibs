// MakeJunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

#include "ProcessString.h"

int wmain(int argc, wchar_t** argv)
{
	std::wcout << L"Command:\tthis.exe infile outfile newdrive" << std::endl;
	std::wcout << L"Sample:\tthis.exe in.txt out.cmd E" << std::endl;
	if (argc < 4)
	{
		std::wcout << L"Invalid arg, please re-run the command line" << std::endl;
		return -1;
	}

	std::wcout << "start processing" << std::endl;
	SmartLib::PathProcessor::API(argv[1], argv[2], argv[3][0]);
	std::wcout << "end processing" << std::endl;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
