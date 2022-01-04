#include "std_lib_facilities.h"

void printInt(int i)
{
	cout << i << "\n";
}

int main()
{
	int int1{ 0 }, int2{ 0 };
	while (cin >> int1 >> int2) {
		// drill 01
		printInt(int1);
		printInt(int2);
		// drill 02
		cout << "The smaller one is: ";
		printInt(int1 < int2 ? int1 : int2);
		cout << "The bigger one is: ";
		printInt(int1 > int2 ? int1 : int2);
		// drill 03
		if (int1 == int2) {
			cout << "They are equal!";
		}
	}

	return 0;
}
