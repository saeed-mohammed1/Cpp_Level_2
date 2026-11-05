/*
  =============================================================================
  Problem Statement:
  Read and Print Structure Data Using Vectors

  Write a C++ program that:
  - Defines a structure `stInfo` to hold employee/person information 
    (First Name, Last Name, and Salary).
  - Dynamically reads records into a `vector<stInfo>` using a `do-while` loop 
    and a temporary structure object with `push_back`.
  - Iterates through the vector using a range-based for loop to print 
    all stored records cleanly.
  =============================================================================
*/
#include <iostream>
#include <vector>
using namespace std;

struct stInfo
{
	string FristName;
	int Salary;
	string LastName;
};

void ReadVector(vector <stInfo>& vInfo)
{
	stInfo TempInfo;
	char Again = 'N';
	do
	{
		cout << "enter Frist Name? ";
		cin >> TempInfo.FristName;
		cout << "enter Last Name? ";
		cin >> TempInfo.LastName;
		cout << "enter Salary? ";
		cin >> TempInfo.Salary;
		vInfo.push_back(TempInfo);
		cout << "Do you want more Info Again? (Y/N) ?";
		cin >> Again;
	} while (Again == 'Y' || Again == 'y');
}

void PrintVector(vector <stInfo>& vInfo)
{
	cout << "\nVector Temp: \n";
	for (stInfo& Info : vInfo)
	{
		cout << "Frist Name: " << Info.FristName << endl;
		cout << "Last Name : " << Info.LastName << endl;
		cout << "Salary    : " << Info.Salary << endl;
		cout << endl;
	}
	
}

int main()
{
	vector <stInfo> vInfo;
	ReadVector(vInfo);
	PrintVector(vInfo);

	return 0;
}

