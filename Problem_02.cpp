/*
  =============================================================================
  Problem Statement:
  Print Numbers from M to N (Descending) Using Recursion

  Write a C++ program that:
  - Implements a recursive function to print numbers from M down to N.
  - Demonstrates the concept of recursion and managing the base condition
    to stop recursive calls safely.
  =============================================================================
*/
#include <iostream>

using namespace std;
void PrintNumbers(int M, int N)
{

	if (N <= M)
	{
		cout << M << endl;
		
		PrintNumbers(M - 1, N);
	}
}

int main()
{
	PrintNumbers(10, 1);

	return 0;
}
