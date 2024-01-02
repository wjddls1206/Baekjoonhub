#include <iostream>

using namespace std;

int main() {

	int arr[42];

	for (int i = 0; i < 42; i++) {

		arr[i] = -1;

	}
	
	int num;

	for (int i = 0; i < 10; i++) {

		cin >> num;
		arr[num % 42] = num % 42;

	}

	int result = 0;

	for (int i = 0; i < 42; i++) {

		if (arr[i] != -1)
			result++;

	}

	cout << result;

	return 0;
}