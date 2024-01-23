#include <iostream>

using namespace std;

int main() {

	// 가로
	int width = 0;
	// 세로
	int length = 0;

	int x[3] = { 0 };
	int y[3] = { 0 };

	int result_x = 0;
	int result_y = 0;

	for (int i = 0; i < 3; i++) {

		cin >> x[i] >> y[i];

	}

	if (x[0] == x[1])
		result_x = x[2];

	else {

		if (x[0] == x[2])
			result_x = x[1];

		else
			result_x = x[0];

	}

	if (y[0] == y[1])
		result_y = y[2];

	else {

		if (y[0] == y[2])
			result_y = y[1];

		else
			result_y = y[0];

	}

	cout << result_x << " " << result_y;

	return 0;
}