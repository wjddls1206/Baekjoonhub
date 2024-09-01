#include <iostream>

using namespace std;

int main() {

	char num;

	int count[10] = { 0 };

	/*
	* 정수 배열 count 초기화 확인
	* 
	for (int i = 0; i < 10; i++) {

		cout << count[i];

	}
	*/

	while (true) {

		// cin >> num;
		// 
		// 개행 문자를 포함하여 하나의 문자 입력받기
		num = cin.get();

		if (num == '\n') {

			// cout << "개행문자\n";
			break;

		}
		// 정수로 잘 변환되는지 확인
		// cout << int(num - '0') << endl;
		count[int(num - '0')] += 1;

	}

	for (int i = 9; i >= 0; i--) {

		while (true) {

			if (count[i] == 0)
				break;

			cout << i;
			count[i] -= 1;

		}

	}

	return 0;

}