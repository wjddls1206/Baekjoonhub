#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int input[3] = { 0 };

	for (int i = 0; i < 3; i++) {

		cin >> input[i];

	}

	sort(input, input + 3);

	if (input[2] < input[0] + input[1]) {

		cout << input[0] + input[1] + input[2];

	}

	else {

		cout << input[0] + input[1] + (input[0] + input[1] - 1);

	}
	
	return 0;
}