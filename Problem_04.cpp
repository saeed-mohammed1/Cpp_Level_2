/*
  =============================================================================
  Problem Statement:
  Fill and Print a 10x10 Multiplication Table Using a 2D Array

  Write a C++ program that:
  - Initializes a 10x10 two-dimensional array.
  - Fills the array with the product of multiplication table values (1 to 10).
  - Prints the 2D array neatly formatted with leading zeros (`%02d`).
  =============================================================================
*/
#include <iostream>
using namespace std;
void Full2DArray(int arr[10][10])
{
	for (int i = 1; i <= 10;i++)
	{
		for (int j = 1; j <= 10;j++)
		{
			arr[i - 1][j - 1] = i * j;
		}
	}
}

void Print2DArray(int arr[10][10])
{
	for (int i = 0; i < 10;i++)
	{
		for (int j = 0; j < 10;j++)
		{
			printf("%02d ", arr[i][j]);
		}
		cout << endl;
	}
}


int main()
{
	int arr[10][10];
	Full2DArray(arr);
	Print2DArray(arr);
	
	return 0;
}
