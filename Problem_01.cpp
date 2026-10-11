/*
  =============================================================================
  Problem Statement:
  Check Number Status (Positive, Negative, or Zero)

  Write a C++ program that:
  - Reads an integer from the user using a custom header library (MyLib.h / namespace ReadIn).
  - Evaluates whether the number is POSITIVE, ZERO, or NEGATIVE.
  - Utilizes a clean nested ternary operator (? :) to output the result
    efficiently without redundant print statements.
  =============================================================================
*/
#include <iostream>
#include "MyLib.h"
using namespace ReadIn;
using namespace std;

int main()
{
	int Num = ReadNumber("Please enter Number");
	cout << ((Num > 0) ? "POSITIVE" : ((Num == 0) ? "ZERO" : "NEGATIVE"));
	return 0;
}
