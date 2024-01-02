#include <iostream>
#include <string>

using namespace std;

int main() {

	string S;
	cin >> S;

	string croatia[8] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

	int index;

	for (int i = 0; i < 8; i++) {

		while (true) {

			if (S.find(croatia[i]) == string::npos)
				break;

			S.replace(S.find(croatia[i]), croatia[i].length(), "0");

		}

	}

	cout << S.length();

	return 0;
}