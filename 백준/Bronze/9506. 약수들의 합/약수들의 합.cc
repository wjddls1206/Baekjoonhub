#include <iostream>

using namespace std;

int main() {

	int n = 1;

	int sum = 0;

	while (true) {

		cin >> n;

		if (n == -1)
			return 0;

		int list[100000] = { 0 };

		int index = -1;

		for (int i = 1; i < n; i++) {

			if (n % i == 0) {

				sum += i;
				index += 1;
				list[index] = i;

			}

		}

		if (sum == n) {

			cout << n << " = ";

			for (int j = 0; j < index; j++) {

				cout << list[j] << " + ";

			}

			cout << list[index] << endl;

		}

		else {

			cout << n << " is NOT perfect." << endl;

		}

		sum = 0;

	}

	return 0;
}