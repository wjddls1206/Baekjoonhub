#include <iostream>

using namespace std;

int main() {

	int M, N;
	cin >> M >> N;

	int sum = 0;
	int min = -1;

	bool flag_sum = true;

	if (M == 1 && N == 1) {

		cout << min;
		return 0;

	}

	else if (M == 1 && N != 1) {

		M += 1;

	}

	for (int i = M; i < N + 1; i++) {

		for (int j = 2; j < i; j++) {

			if (i % j == 0) {

				flag_sum = false;
				break;

			}

		}

		if (flag_sum == true) {

			sum += i;

			if (min == -1)
				min = i;

		}

		flag_sum = true;

	}

	if (sum == 0) {
		cout << min;
		return 0;
	}

	cout << sum << endl << min;

	return 0;
}