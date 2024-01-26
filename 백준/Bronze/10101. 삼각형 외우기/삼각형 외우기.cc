#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	if (a == 60 && b == 60 && c == 60) {

		cout << "Equilateral";
		return 0;

	}

	int sum = a + b + c;

	if (sum != 180) {

		cout << "Error";
		return 0;

	}

	else {

		if (a == b || a == c || b == c)
			cout << "Isosceles";

		else
			cout << "Scalene";

	}
	

	return 0;
}