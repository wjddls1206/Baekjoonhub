#include <iostream>

using namespace std;

int main() {

	int N, M;
	cin >> N >> M;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {

		arr[i] = i + 1;

	}

	int start, finish;

	for (int i = 0; i < M; i++) {

		// 문제에서는 
		// start = i
		// finish = j
		cin >> start >> finish;

		if (start == finish)
			continue;

		int is_odd = finish - start + 1;

		// 짝수
		if (is_odd % 2== 0) {

			for (int j = 0; j < is_odd / 2; j++) {

				int temp;
				temp = arr[start + j - 1];
				arr[start + j - 1] = arr[finish - j - 1];
				arr[finish - j - 1] = temp;

			}

		}

		// 홀수
		else {

			for (int j = 0; j < (is_odd - 1 ) / 2; j++) {

				int temp;
				temp = arr[start + j - 1];
				arr[start + j - 1] = arr[finish - j - 1];
				arr[finish - j - 1] = temp;

			}

		}

	}

	for (int i = 0; i < N; i++) {

		cout << arr[i] << " ";

	}

	return 0;
}