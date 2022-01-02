#include "std_lib_facilities.h"

int main()
{
	cout << "Enter miles to be converted to kilometers\n";
	double miles{ 0 };
	double kilos{ 0 };
	cin >> miles;
	kilos = miles * 1.609;
	cout << miles << ((miles == 1) ? " mile" : " miles") << " is equal to "
	     << kilos << ((kilos == 1) ? " kilometer" : " kilometers") << " .";

	return 0;
}
