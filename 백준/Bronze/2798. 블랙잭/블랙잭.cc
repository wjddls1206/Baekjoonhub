#include <iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;

	int* arr = new int[n];

	int num;

	for (int i = 0; i < n; i++) {

		cin >> num;
		arr[i] = num;

	}

	int max_sum = 0;
	int sum = 0;

	for (int i = 0; i <= n - 3; i++) {

		for (int j = i + 1; j <= n - 2; j++) {

			for (int k = j + 1; k <= n; k++) {

				sum = arr[i] + arr[j] + arr[k];

				if (sum > max_sum && sum <= m)
					max_sum = sum;

				sum -= arr[k];

			}

			sum -= arr[j];

		}

		sum -= arr[i];

	}

	cout << max_sum;

	delete[] arr;

	return 0;
}