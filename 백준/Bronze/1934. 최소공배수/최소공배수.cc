#include <iostream>
#include <vector>

using namespace std;

// 최대공약수 * 최소공배수 = 두 수의 곱
// 최소공배수 = 두 수의 곱 / 최대공약수

int gcd(int a, int b) {

	while (1) {

		int r = a % b;

		if (r == 0)
			return b;

		a = b;
		b = r;

	}

}

int lcm(int a, int b) {

	return a * b / gcd(a, b);

}

int main() {

	int T;
	cin >> T;

	vector<int> result;

	for (int i = 0; i < T; i++) {

		int A, B;
		cin >> A >> B;

		// 항상 A > B 이도록 설정
		if (A < B) {

			int temp = A;
			A = B;
			B = temp;

		}

		result.push_back(lcm(A, B));

	}

	for (int i = 0; i < T; i++) {

		cout << result[i] << endl;

	}

	return 0;
}