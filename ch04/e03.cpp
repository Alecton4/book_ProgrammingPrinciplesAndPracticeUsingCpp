#include "std_lib_facilities.h"
#include <float.h>

int main()
{
	vector<double> allUserIn;
	double userIn{ 0 }, max{ 0 }, min{ DBL_MAX }, sum{ 0 }, mean{ 0 };
	while (cin >> userIn) {
		allUserIn.push_back(userIn);
		max = max > userIn ? max : userIn;
		min = min < userIn ? min : userIn;
		sum += userIn;
	}
	mean = sum / allUserIn.size();

	return 0;
}