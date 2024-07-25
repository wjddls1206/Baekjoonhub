#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int arr[5] = { 0 };

	int sum = 0;

	for (int i = 0; i < 5; i++) {

		int temp;
		cin >> temp;
		arr[i] = temp;
		sum += temp;

	}

	int avg = sum / 5;

	cout << avg << endl;

	sort(arr, arr + 5);

	cout << arr[2];

	return 0;
}