#include <iostream>

using namespace std;

int main() {

	int a, b;
	cin >> a >> b;

	int c;
	cin >> c;

	if (b + c >= 60) {

		int tmp;
		tmp = (b + c) / 60;

		a += tmp;
		if (a >= 24) {
			a -= 24;
		}

		b = (b + c) % 60;

	}

	else {

		b += c;

	}

	cout << a << " " << b << endl;

	return 0;
}