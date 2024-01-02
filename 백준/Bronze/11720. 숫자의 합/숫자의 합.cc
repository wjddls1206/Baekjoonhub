#include <iostream>

using namespace std;

int main() {

	int size;
	cin >> size;

	int* arr = new int[size];

	for (int i = 0; i < size; i++) {

		char num;
		cin >> num;
		arr[i] = num - 48;

	}

	int sum = 0;

	for (int i = 0; i < size; i++) {

		sum += arr[i];

	}

	cout << sum;

	return 0;
}