#include <iostream>

using namespace std;

int main() {

	int num1, num2;
	cin >> num1 >> num2;

	int num1_100 = num1 / 100;
	num1 -= num1_100 * 100;
	int num1_10 = num1 / 10;
	int num1_1 = num1 % 10;

	int num2_100 = num2 / 100;
	num2 -= num2_100 * 100;
	int num2_10 = num2 / 10;
	int num2_1 = num2 % 10;

	num1 = num1_1 * 100 + num1_10 * 10 + num1_100;
	num2 = num2_1 * 100 + num2_10 * 10 + num2_100;

	if (num1 > num2)
		cout << num1;

	else
		cout << num2;


	return 0;
}