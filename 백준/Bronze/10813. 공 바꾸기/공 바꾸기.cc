#include <iostream>

using namespace std;

int main() {

	int N, M;
	cin >> N >> M;

	int* arr = new int[N];

	for (int k = 0; k < N; k++) {

		arr[k] = k + 1;

	}
	
	int i, j;
	int temp;

	for (int k = 0; k < M; k++) {

		cin >> i >> j;

		i = i - 1;
		j = j - 1;

		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

	}

	for (int k = 0; k < N; k++) {

		cout << arr[k] << " ";

	}

	return 0;
}