#include "std_lib_facilities.h"

int main()
{
	cout << "Enter the name of the person you want to write to:\n";
	string firstName{ "?" }; // first_name is a variable of type string
	string lastName{ "?" };
	cin >> firstName >> lastName; // read characters into first_name
	cout << "Enter the name of another friend:\n";
	string friendName{ "?" };
	cin >> friendName;
	cout << "Enter the gender of the friend(m for male, f for female):\n";
	char friendGender{ '?' };
	cin >> friendGender;
	cout << "Enter the age of your recipient:\n";
	int age{ -1 };
	cin >> age;
	if (age <= 0 || age >= 110) {
		simple_error("You're kidding!");
	}
	cout << "Dear " << firstName << ",\n"
	     << "  "
	     << "How are you? I am fine. I miss you.\n"
	     << "  "
	     << "Have you seen " << friendName << " lately? "
	     << "If you see " << friendName << " please ask "
	     << (friendGender == 'm' ? "him" : "her") << " to call me.\n"
	     << "  "
	     << "I hear you just had a birthday and you are " << age
	     << " years old. ";
	if (age < 12) {
		cout << "Next year you will be " << age + 1 << "!\n";
	} else if (age == 17) {
		cout << "Next year you will be able to vote!\n";
	} else if (age > 70) {
		cout << "I hope you enjoy retirement!\n";
	}
	cout << "Yours sincerely,\nAlex";

	return 0;
}
