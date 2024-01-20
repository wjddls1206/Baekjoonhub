#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	int num;
	
	int result = 0;

	bool flag = true;

	for (int i = 0; i < N; i++) {

		cin >> num;

		if (num == 1)
			continue;

		flag = true;

		for (int j = 2; j < num; j++) {

			if (num % j == 0) {

				flag = false;
				break;

			}

		}

		if (flag == true) {

			result += 1;

		}

	}

	cout << result;

	return 0;
}