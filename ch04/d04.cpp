#include "std_lib_facilities.h"

void printDouble(double i)
{
	cout << i << "\n";
}

int main()
{
	// drill 04
	double dbl1{ 0 }, dbl2{ 0 };
	while (cin >> dbl1 >> dbl2) {
		printDouble(dbl1);
		printDouble(dbl2);
		cout << "The smaller one is: ";
		printDouble(dbl1 < dbl2 ? dbl1 : dbl2);
		cout << "The bigger one is: ";
		printDouble(dbl1 > dbl2 ? dbl1 : dbl2);
		// drill 05
		if (dbl1 - dbl2 < 1.0 / 100 && dbl1 - dbl2 > -1.0 / 100) {
			cout << "They are almost equal!";
		}
		if (dbl1 == dbl2) {
			cout << "They are equal!";
		}
	}

	return 0;
}
