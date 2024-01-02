#include <iostream>

using namespace std;

int main() {

	int a, b, c, x;

	cin >> a >> b >> c;

	if (c - b == 0) {

		cout << "-1" << endl;

	}

	else {

		x = a / (c - b);

		if (x >= 0) {

			cout << x + 1 << endl;

		}

		else {
			cout << "-1" << endl;
		}
	}

	return 0;
}