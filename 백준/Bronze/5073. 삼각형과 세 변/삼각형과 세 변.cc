#include <iostream>

using namespace std;

int main() {

	int a, b, c;

	int max = 0;

	while (true) {

		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0)
			break;

		max = (a > b) ? a : b;
		max = (max < c) ? c : max;

		if (a > b && a > c) {

			if (a >= b + c) {
				cout << "Invalid" << endl;
				continue;
			}			

		}

		else if (b > a && b > c) {

			if (b >= a + c) {
				cout << "Invalid" << endl;
				continue;
			}

		}

		else {

			if (c >= a + b) {
				cout << "Invalid" << endl;
				continue;
			}

		}

		if (a == b && b == c)
			cout << "Equilateral" << endl;

		else if (a != b && a != c && b != c)
			cout << "Scalene" << endl;

		else
			cout << "Isosceles" << endl;

	}

	return 0;
}