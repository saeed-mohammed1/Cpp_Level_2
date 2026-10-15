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
void PrintNumbers(int N, int M)
{

	if (N <= M)
	{
		cout << M << endl;
		
		PrintNumbers(N, M - 1);
	}
}

int main()
{
	PrintNumbers(1, 5);

	return 0;
}
