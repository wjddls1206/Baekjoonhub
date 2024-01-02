#include <iostream>
#include <string>

using namespace std;

int main() {

	// 입출력을 분리하기 위한 코드
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	string str;
	
	cin >> T;

	for (int i = 0; i < T; i++) {

		cin >> str;
		cout << str.at(0) << str.at(str.length() - 1) << endl;

	}

	return 0;
}