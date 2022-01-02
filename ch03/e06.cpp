#include "std_lib_facilities.h"
#include <string>

int main()
{
	cout << "Enter 3 integers:\n";
	int int1{ 0 }, int2{ 0 }, int3{ 0 };
	int tmp{ 0 };
	cin >> int1 >> int2 >> int3;

	if (int1 > int2) {
		tmp = int1;
		int1 = int2;
		int2 = tmp;
	}
	if (int1 > int3) {
		tmp = int1;
		int1 = int3;
		int3 = tmp;
	}
	if (int2 > int3) {
		tmp = int2;
		int2 = int3;
		int3 = tmp;
	}
	cout << "Non-decreasing order: " << int1 << " " << int2 << " " << int3
	     << '\n';

	cout << "Enter 3 strings:\n";
	string str1{ 0 }, str2{ 0 }, str3{ 0 };
	string strTmp{ 0 };
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
