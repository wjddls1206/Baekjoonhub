#include <iostream>
#include <string>

using namespace std;

int main() {

	string S;
	getline(cin, S);

	int length = S.length();

	if (S.length() == 1 && S[0] == ' ') {
		cout << 0;
		return 0;
	}

	// 앞뒤에 공백이 있다면 지워서 S에 다시 저장
	while (true) {

		if (S.find(" ") == 0) {

			S = S.substr(1, length - 1);
			length -= 1;

		}

		else if (S.rfind(" ") == length - 1) {

			S = S.substr(0, length - 1);
			length -= 1;

		}

		else
			break;

	}

	int count = 0;

	int num = 0;
	for (int i = 0; i < length; i++) {

		string temp;
		temp = S.substr(i, 1);
		if (temp == " ")
			num += 1;

	}

	cout << num + 1;

	return 0;
}