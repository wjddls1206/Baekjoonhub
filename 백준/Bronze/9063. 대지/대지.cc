#include <iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	if (N == 1) {

		cout << 0;
		return 0;

	}

	int x, y;

	int min_x = 10000;
	int min_y = 10000;
	int max_x = -10000;
	int max_y = -10000;

	for (int i = 0; i < N; i++) {

		cin >> x >> y;

		if (x <= min_x)
			min_x = x;

		if (x >= max_x)
			max_x = x;

		if (y <= min_y)
			min_y = y;

		if (y >= max_y)
			max_y = y;

	}

	cout << (max_x - min_x) * (max_y - min_y);

	return 0;
}