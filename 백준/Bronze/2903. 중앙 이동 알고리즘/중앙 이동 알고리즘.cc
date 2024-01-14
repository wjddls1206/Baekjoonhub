#include <iostream>

using namespace std;

int main() {

	// N = 0      result = 4
	// N = 1      result = 9
	// N = 2      result = 25
	// N = 3      result = 81
	// N = n      result = (2^n + 1)^2

	int N;
	cin >> N;

	int temp = 1;

	for (int i = 0; i < N; i++) {

		temp *= 2;

	}

	cout << (temp + 1) * (temp + 1);

	return 0;
}