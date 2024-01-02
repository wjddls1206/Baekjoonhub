#include <iostream>

using namespace std;

int main() {

	int year;
	int result = 0;

	cin >> year;

	if (year % 4 == 0 && (year % 100 != 0) || year % 400 == 0) {

		result = 1;
		cout << result << endl;

	}

	else { cout << result << endl; }

	return 0;
}