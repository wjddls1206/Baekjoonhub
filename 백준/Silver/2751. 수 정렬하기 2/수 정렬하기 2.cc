#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	int* arr = new int[N];
	int temp = 0;

	for (int i = 0; i < N; i++) {

		cin >> temp;
		arr[i] = temp;

	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {

		cout << arr[i] << "\n";

	}

	delete[] arr;

	return 0;
}