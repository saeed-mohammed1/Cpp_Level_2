/*
  =============================================================================
  Problem Statement:
  Calculate Power of a Number Using Recursion

  Write a C++ program that:
  - Implements a recursive function `MyPower(Base, Power)`.
  - Calculates the result of raising a base number to a given power.
  - Handles the base case properly when Power equals 0 (returning 1).
  =============================================================================
*/
#include <iostream>

using namespace std;
int MyPower(int Base, int Power)
{
	if (Power == 0)
	{
		return 1;
	}
	else
	{
		return Base * MyPower(Base, Power - 1);
	}

}

int main()
{
	cout << MyPower(2, 5) << endl;

	return 0;
}
