#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	if (N == 1)
		return 0;

	int i = 2;

	while (true) {

		if (i > N)
			break;

		if (N % i == 0) {

			N = N / i;
			cout << i << endl;

		}

		else
			i += 1;

	}

	return 0;
}