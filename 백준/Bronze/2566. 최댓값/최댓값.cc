#include <iostream>

using namespace std;

int main() {

	int arr[9][9];

	int num;

	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9; j++) {

			cin >> num;
			arr[i][j] = num;

		}

	}

	int max = -1;
	int row = 0;
	int column = 0;

	for (int i = 0; i < 9; i++) {

		for (int j = 0; j < 9; j++) {

			if (arr[i][j] > max) {

				max = arr[i][j];
				row = i + 1;
				column = j + 1;

			}

		}

	}

	cout << max << endl << row << " " << column;

	return 0;
}