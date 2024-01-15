#include <iostream>

using namespace std;

int main() {

	int count = 1;
	int layer = 1;

	int find;
	cin >> find;

	while (true) {

		if (find <= layer) {
			break;
		}

		else {
			layer = layer + 6 * count;
			count += 1;
		}

	}

	cout << count;

	return 0;
}