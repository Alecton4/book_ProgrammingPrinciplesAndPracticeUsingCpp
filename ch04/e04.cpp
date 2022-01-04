#include "std_lib_facilities.h"

int main()
{
	// TODO: when n == 49, this program asks the user 8 times rather than 7 times.
	// bool bingo{ false };
	// int left{ 1 }, right{ 100 }, medium{ 50 };
	// while (!bingo) {
	// 	cout << "The number is " << left << " - " << right << "\n"
	// 	     << "Is the number you are thinking of less than " << medium
	// 	     << "?\nEnter y or n: ";
	// 	// validate user input
	// 	char userIn{ ' ' };
	// 	bool isValid{ false };
	// 	while (!isValid) {
	// 		cin >> userIn;
	// 		if (userIn == 'y' || userIn == 'n') {
	// 			isValid = true;
	// 		} else {
	// 			cout << "Illegal input! Try again!\n";
	// 		}
	// 	}
	// 	// binary search
	// 	if (userIn == 'y') {
	// 		right = medium - 1;
	// 	} else {
	// 		left = medium;
	// 	}
	// 	if (left == right) {
	// 		cout << "Find it! " << left << "!\n";
	// 		bingo = true;
	// 	} else if (right - left == 1) {
	// 		medium = right;
	// 	} else {
	// 		medium = (left + right) / 2;
	// 	}
	// }

	int left{ 1 }, right{ 100 }, medium{ 0 }, trail{ 0 };
	while (left < right) {
		medium = right - (right - left) / 2;
		char userIn{ ' ' };
		bool isValid{ false };
		cout << "Is the number you are thinking of less than " << medium
		     << "?\nEnter y or n: ";
		while (!isValid) {
			cin >> userIn;
			if (userIn == 'y' || userIn == 'n') {
				isValid = true;
			} else {
				cout << "Illegal input! Enter y or n: ";
			}
		}
		if (userIn == 'y') {
			right = medium - 1;
		} else {
			left = medium;
		}
		++trail;
	}
	medium = right - (right - left) / 2;
	cout << "The number you are thinking of is " << medium << ".\n";
	cout << "It took " << trail << " guesses.\n";

	return 0;
}
