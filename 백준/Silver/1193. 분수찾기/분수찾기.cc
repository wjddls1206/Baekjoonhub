#include <iostream>

using namespace std;

int main() {

	// 방향 : 오른쪽 위 (true) or 왼쪽 아래 (false) 판단
	bool flag = true;

	int X;
	cin >> X;

	int line = 1;
	int count = 1;
	int temp = 1;


	// 몇 번째 line 에 속해있는지 알아내는 코드
	while (true) {

		if (count >= X)
			break;

		else {

			temp += 1;
			count = count + temp;
			flag = !flag;
			line += 1;

		}

	}

	// 현재 line 에서 몇 번째 분수인지
	int current = X - (count - temp);

	int denominator;
	int numerator;

	if (flag == true) {

		denominator = 0;			// 분모
		numerator = line + 1;		// 분자

	}

	else {

		denominator = line + 1;		// 분모
		numerator = 0;				// 분자

	}

	for (int i = 0; i < current; i++) {

		if (flag == true) {

			numerator -= 1;
			denominator += 1;

		}

		else {

			numerator += 1;
			denominator -= 1;

		}

	}

	cout << numerator << "/" << denominator;

	return 0;

}