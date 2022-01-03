#include "std_lib_facilities.h"

int main()
{
	cout << "Enter two integers: ";
	int int1{ 0 };
	int int2{ 0 };
	cin >> int1 >> int2;
	cout << "Smaller one is " << ((int1 < int2) ? int1 : int2) << ".\n"
	     << "The sum is " << (int1 + int2) << ".\n"
	     << "The difference is " << (int1 - int2) << ".\n"
	     << "The product is " << (int1 * int2) << ".\n"
	     << "The ratio is " << ((double)int1 / (double)int2) << ".\n";

	cout << "Enter two floating point numbers: ";
	double double1{ 0 };
	double double2{ 0 };
	cin >> double1 >> double2;
	cout << "Smaller one is " << ((double1 < double2) ? double1 : double2)
	     << ".\n"
	     << "The sum is " << (double1 + double2) << ".\n"
	     << "The difference is " << (double1 - double2) << ".\n"
	     << "The product is " << (double1 * double2) << ".\n"
	     << "The ratio is " << (double1 / double2) << ".\n";

	return 0;
}