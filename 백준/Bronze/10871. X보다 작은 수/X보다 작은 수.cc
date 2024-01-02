#include <iostream>

using namespace std;

int main() {

	int N, X;

	cin >> N >> X;

	int* arr = new int[N];

	int num;

	for (int i = 0; i < N; i++) {

		cin >> num;

		arr[i] = num;

	}

	for (int i = 0; i < N; i++) {

		if (arr[i] < X)
			cout << arr[i] << " ";

	}

	return 0;
}