#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	// i의 자릿수 계산
	int count = 0;

	int copy_n = n;

	while (copy_n != 0) {

		count += 1;
		copy_n = copy_n / 10;

	}

	for (int i = 1; i <= n; i++) {

		int result = i;
		int answer = i;

		//cout << "result = " << result << endl;

		// 계산하려는 생성자가 한 자리수 일 때
		if (count == 1) {

			result += i;

		}

		// 두 자리수 이상일 경우
		else {
			int copy = i;

			for (int j = 0; j < count; j++) {
				
				int temp = copy % 10;
				result = result + temp;
				copy = copy / 10;

				//cout << j + 1 << "번째 자리 수 : " << temp << " / result = " << result << " / copy = " << copy << endl;
				
			}

			if (result == n) {

				cout << answer;
				return 0;

			}

		}

		if (result == n) {

			cout << answer;
			return 0;

		}

	}

	cout << "0";

	return 0;
}