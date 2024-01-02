#include <iostream>

using namespace std;

int main() {

	int arr[4];
	int min;

	for (int i = 0; i < 4; i++) {

		cin >> arr[i];

	}

	arr[2] -= arr[0];
	arr[3] -= arr[1];

	min = arr[0];

	for (int i = 0; i < 4; i++) {

		if (arr[i] <= min) {
			min = arr[i];
		}

	}

	cout << min << endl;

	return 0;
}