#include <iostream>
#include <string>

#define _CRT_SECURE_NO_WARNINGS 

using namespace std;

int main() {

    string s;
    string alphabet = "abcdefghijklmnopqrstuvwxyz";

    cin >> s;

    // 문자열1.find('문자열2') : 문자열2가 처음 등장하는 index 반환함
    // 문자열2가 문자열1에 없을 경우 unsigned형의 -1이 반환됨
    // -1이 저장되게 하려면 int형으로 형변환을 해줘야함.
    for (int i = 0; i < alphabet.length(); i++)
        cout << (int)s.find(alphabet[i]) << " ";

	return 0;
}