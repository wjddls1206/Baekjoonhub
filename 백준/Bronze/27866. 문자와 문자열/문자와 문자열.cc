#include <iostream>
#include <string>

using namespace std;

int main() {

	string S;
	int index;

	cin >> S;
	cin >> index;

	// index 위치의 문자 반환, S[index]도 가능
	cout << S.at(index - 1);

	return 0;
}