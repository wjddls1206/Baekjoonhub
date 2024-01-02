#include <iostream>

using namespace std;

int main() {

	int arr[9];

	int num;
	for (int i = 0; i < 9; i++) {

		cin >> num;
		arr[i] = num;

	}

	int max = arr[0];
	int index = 0;

	for (int i = 1; i < 9; i++) {

		if (max < arr[i]) {
			max = arr[i];
			index = i;
		}

	}

	cout << max << endl;
	cout << index + 1;

	return 0;
}