#include <iostream>

using namespace std;

int main() {

	int N;
	
	cin >> N;

	// 동적 배열 할당
	int* arr = new int[N];

	int num;

	for (int i = 0; i < N; i++) {

		cin >> num;
		arr[i] = num;

	}

	int key;
	cin >> key;

	int result = 0;

	for (int i = 0; i < N; i++) {

		if (arr[i] == key)
			result++;

	}

	cout << result;

	return 0;
}