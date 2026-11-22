#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t t = time(0);
	char* dt = ctime(&t);

	cout << "time is local : " << dt << endl;


	tm* gmtm = gmtime(&t);
	dt = asctime(gmtm);
	cout<< "time is UTC : " << dt << endl;


	return 0;
}
