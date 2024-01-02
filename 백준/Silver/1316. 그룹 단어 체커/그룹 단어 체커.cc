#include <iostream>
#include <string>
#include <cstring>

#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

using namespace std;

int main() {

	// 입력받을 단어 수
	int count = 0;
	cin >> count;

	// a 부터 z 까지를 의미하는 배열 선언
	bool alpha[26];

	// 초기화
	for (int i = 0; i < 26; i++) {

		alpha[i] = true;

	}

	// 그룹 단어의 수
	int result = 0;

	// 입력받는 단어를 받아올 변수 선언
	string str;
	
	// 입력받은 string str 을 char ch에 저장할거임!
	char ch[101];

	bool flag = true;

	// 입력 받아서 검사
	for (int i = 0; i < count; i++) {

		// 공백 이전까지의 문자열 입력
		cin >> str;
		// 공백 포함 한 줄 전체 입력
		// getline(cin, str);

		// string 을 char 로 형변환해 ch 에 저장
		strcpy(ch, str.c_str());

		if (str.length() == 1  || str.length() == 2) {

			result += 1;
			continue;

		}

		for (int j = 0; j < str.length() - 2; j++) {

			if (ch[j] == ch[j + 1]) {

				//continue;

			}

			else {

				if (alpha[(int)(ch[j]) - 97] == false) {

					flag = false;
					break;
					// break 는 do, for, switch, while 문 종료시킴

				}

				else {

					alpha[(int)(ch[j]) - 97] = false;

				}

			}

		}

		if (str.length() > 2 && flag == true && alpha[(int)(ch[str.length() - 2]) - 97] == true && alpha[(int)(ch[str.length() - 1]) - 97] == true)
			result += 1;

		// 초기화
		for (int i = 0; i < 26; i++) {

			alpha[i] = true;

		}

		flag = true;

	}
	
	cout << result;

	return 0;
}