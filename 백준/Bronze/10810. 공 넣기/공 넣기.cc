#include <iostream>

using namespace std;

int main() {

	int N, M;

	cin >> N >> M;

	int* arr = new int[N];

	for (int l = 0; l < N; l++) {

		arr[l] = 0;

	}

	int i, j, k;

	for (int l = 0; l < M; l++) {

		cin >> i >> j >> k;

		for (int m = i - 1; m < j; m++) {

			arr[m] = k;

		}

	}

	for (int l = 0; l < N; l++) {

		cout << arr[l] << " ";

	}

	return 0;
}