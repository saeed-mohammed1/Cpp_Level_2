/*
  =============================================================================
  Problem Statement:
  Read and Print Dynamic Elements Using Vectors

  Write a C++ program that:
  - Dynamically reads numbers from the user and stores them in a `vector<int>`
    using a `do-while` loop and `push_back`.
  - Prompts the user to continue adding numbers or stop.
  - Prints all the elements stored in the vector using a ranged-based for loop.
  =============================================================================
*/
#include <iostream>
#include <vector>
using namespace std;

void ReadVector(vector <int> &vNumbers)
{
	int Num = 0;
	char A = 'N';
	do
	{
		cout << "enter your number? ";
		cin >> Num;
		vNumbers.push_back(Num);
		cout << "Do you need Add Number Again? (Y/N) ";
		cin >> A;
	} while (A == 'Y' || A == 'y');
}

void PrintVector(vector <int> & vNumbers)
{
	for (int& Number : vNumbers)
	{
		cout << Number << "\t";
	}
	cout << endl;
}

int main() 
{
	vector <int> vNumbers;
	ReadVector(vNumbers);
	PrintVector(vNumbers);
	
	return 0;
}
