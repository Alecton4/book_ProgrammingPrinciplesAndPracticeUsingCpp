#include "std_lib_facilities.h"

// exercise 06
const vector<string> digits{ "zero", "one", "two",   "three", "four",
			     "five", "six", "seven", "eight", "nine" };
const vector<char> operators{ '+', '-', '*', '/' };

// REVIEW: it works, why?
double getDouble()
{
	double userDbl{ 0 };
	string userStr{ "" };
	if (cin >> userDbl) {
		return userDbl;
	}
	// exercise 07
	cin.clear();
	cin >> userStr;
	for (int i{ 0 }; i < 10; ++i) {
		if (userStr == digits[i]) {
			return i;
		}
	}
	simple_error("Unknown digit!");
}

char getOperator()
{
	char userChar{ ' ' };
	cin.clear();
	cin >> userChar;
	for (char c : operators) {
		if (userChar == c) {
			return userChar;
		}
	}
	simple_error("Invalid operator!");
}

int main()
{
	// exercise 05
	cout << "Enter 2 numbers and an operator in the middle, separated by space\n"
	     << "The operator can be + - * / : ";
	while (true) {
		double val1{ 0 }, val2{ 0 }, out{ 0 };
		char oper{ ' ' };
		val1 = getDouble();
		oper = getOperator();
		val2 = getDouble();
		switch (oper) {
		case '+':
			out = val1 + val2;
			break;
		case '-':
			out = val1 - val2;
			break;
		case '*':
			out = val1 * val2;
			break;
		case '/':
			if (val2 == 0) {
				simple_error("Divided by zero!");
			}
			out = val1 / val2;
			break;
		}
		cout << "The result is: " << out << "\n"
		     << "You can try again: ";
	}
}
