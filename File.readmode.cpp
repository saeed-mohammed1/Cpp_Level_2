/*
  =============================================================================
  Problem Statement:
  Read and Print File Content Line by Line

  Write a C++ program that:
  - Opens a text file (`MyFile.txt`) in read mode (`ios::in`) using `fstream`.
  - Checks whether the file is successfully opened before reading.
  - Reads the file line by line using `getline` inside a `while` loop and
    prints each line to the console, then closes the file cleanly.
  =============================================================================
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void PrintFileContent(string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in); // Read Mode

	if (MyFile.is_open())
	{
		string Line;

		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}
		MyFile.close();

	}
}

int main()
{
	PrintFileContent("MyFile.txt");

	return 0;
}
