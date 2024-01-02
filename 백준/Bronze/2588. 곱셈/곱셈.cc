#include <iostream>

using namespace std;

int main() {

	int a, b;
	int b_100, b_10, b_1;
	int result1, result2, result3, total;

	cin >> a >> b;

	b_100 = b / 100;
	b_10 = (b - b_100 * 100) / 10;
	b_1 = b % 10;

	result1 = a * b_1;
	result2 = a * b_10;
	result3 = a * b_100;

	total = result1 + result2 * 10 + result3 * 100;

	cout << result1 << endl;
	cout << result2 << endl;
	cout << result3 << endl;
	cout << total << endl;

	return 0;
}