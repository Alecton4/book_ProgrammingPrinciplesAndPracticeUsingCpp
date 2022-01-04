#include "std_lib_facilities.h"
#include <float.h>

int main()
{
	constexpr double m_to_cm{ 100 };
	constexpr double in_to_cm{ 2.45 };
	constexpr double ft_to_in{ 12 };

	vector<double> allUserIn;
	double dblMax{ 0 }, dblMin{ DBL_MAX }, userIn{ 0 }, sum{ 0 };
	vector<string> units{ "cm", "m", "in", "ft" };
	string userUnit{ "" };

	// drill 07
	cout << "Enter value with unit(cm/m/in/ft):\n";
	while (cin >> userIn >> userUnit) {
		bool isValid{ false };
		int unitIndex{ 0 };
		for (string str : units) {
			if (str == userUnit) {
				isValid = true;
				break;
			}
			++unitIndex;
		}
		// drill 08
		if (isValid) {
			// drill 06
			if (userIn > dblMax) {
				dblMax = userIn;
				cout << "The largest so far!\n";
			}
			if (userIn < dblMin) {
				dblMin = userIn;
				cout << "The smallest so far!\n";
			}

			allUserIn.push_back(userIn);
			switch (unitIndex) {
			case 0:
				sum += userIn / m_to_cm;
				break;
			case 1:
				sum += userIn;
				break;
			case 2:
				sum += userIn * in_to_cm / m_to_cm;
				break;
			case 3:
				sum += userIn * ft_to_in * in_to_cm / m_to_cm;
				break;
			}

		} else {
			cout << "Your unit is illegal!\n";
		}
	}
	// drill 09
	cout << "The smallest is: " << dblMin << "\n"
	     << "The largest is: " << dblMax << "\n"
	     << "The number of values is: " << allUserIn.size() << "\n"
	     << "The total meter(s) is: " << sum << "\n";
	// drill 10 && 11
	sort(allUserIn);
	for (double dbl : allUserIn) {
		cout << dbl << "\n";
	}

	return 0;
}