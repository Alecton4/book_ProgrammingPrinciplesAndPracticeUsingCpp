#include "std_lib_facilities.h"

void swapInt(int *a, int *b)
{
	// int tmp{ *a };
	// *a = *b;
	// *b = tmp;
	*a -= *b;
	*b += *a;
	*a = *b - *a;
}

int main()
{
	// exercise 06
	cout << "Enter 3 integers:\n";
	int int1{ 0 }, int2{ 0 }, int3{ 0 };
	cin >> int1 >> int2 >> int3;
	if (int1 > int2) {
		swapInt(&int1, &int2);
	}
	if (int1 > int3) {
		swapInt(&int1, &int3);
	}
	if (int2 > int3) {
		swapInt(&int2, &int3);
	}
	cout << "Non-decreasing order: " << int1 << " " << int2 << " " << int3
	     << '\n';

	// exercise 07
	cout << "Enter 3 strings:\n";
	string str1{ " " }, str2{ " " }, str3{ " " };
	string strTmp{ " " };
	cin >> str1 >> str2 >> str3;
	if (str1 > str2) {
		strTmp = str1;
		str1 = str2;
		str2 = strTmp;
	}
	if (str1 > str3) {
		strTmp = str1;
		str1 = str3;
		str3 = strTmp;
	}
	if (str2 > str3) {
		strTmp = str2;
		str2 = str3;
		str3 = strTmp;
	}
	cout << "Non-decreasing order: " << str1 << " " << str2 << " " << str3
	     << '\n';

	return 0;
}
