#include <iostream>

using namespace std;

int main() {

	int arr[30] = { 0 };

	int num;

	for (int i = 0; i < 28; i++) {

		cin >> num;
		arr[num - 1] = num;

	}

	for (int i = 0; i < 30; i++) {

		if (arr[i] == 0)
			cout << i + 1 << endl;

	}

	return 0;
}