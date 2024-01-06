#include <iostream>

using namespace std;

int main() {

	int row, column;
	cin >> row >> column;

	int** arr1 = new int* [row];
	int** arr2 = new int* [row];

	for (int i = 0; i < row; i++)
		arr1[i] = new int[column];

	for (int i = 0; i < row; i++)
		arr2[i] = new int[column];

	int element;
	
	for (int i = 0; i < row; i++) {

		for (int j = 0; j < column; j++) {

			cin >> element;
			arr1[i][j] = element;

		}

	}

	for (int i = 0; i < row; i++) {

		for (int j = 0; j < column; j++) {

			cin >> element;
			arr2[i][j] = element;

		}

	}

	for (int i = 0; i < row; i++) {

		for (int j = 0; j < column; j++) {

			arr1[i][j] += arr2[i][j];
			cout << arr1[i][j] << ' ';

		}

		cout << endl;

	}

	/**********할당 해제***********/
	for (int i = 0; i < row; i++)
		delete[] arr1[i];

	for (int i = 0; i < row; i++)
		delete[] arr2[i];

	delete[] arr1;
	delete[] arr2;

	return 0;
}