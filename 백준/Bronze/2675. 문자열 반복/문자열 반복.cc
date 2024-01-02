#include <iostream>
#include <string>

using namespace std;

int main() {

	// 입출력을 분리하기 위한 코드
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {

		int R;
		cin >> R;

		string S;
		cin >> S;

		for (int j = 0; j < S.length(); j++) {

			string Temp;
			Temp = S.substr(j, 1);
			// string문자열.substr(index1, index2)
			// string문자열의 index1 부터 index2 만큼의 길이의 문자열 반환

			for (int k = 0; k < R; k++) {

				cout << Temp;

			}

		}

		cout << endl;

	}

	return 0;
}