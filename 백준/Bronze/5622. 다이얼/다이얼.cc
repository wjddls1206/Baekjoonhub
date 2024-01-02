#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int main() {

	string Dial;
	cin >> Dial;

	int time = 0;

	for (int i = 0; i < Dial.length(); i++) {

		string temp;
		temp = Dial.substr(i, 1);

		if (temp[0] == 'A' || temp[0] == 'B' || temp[0] == 'C')
			time += 3;

		else if (temp[0] == 'D' || temp[0] == 'E' || temp[0] == 'F')
			time += 4;

		else if (temp[0] == 'G' || temp[0] == 'H' || temp[0] =='I')
			time += 5;

		else if (temp[0] == 'J' || temp[0] == 'K' || temp[0] == 'L')
			time += 6;

		else if (temp[0] == 'M' || temp[0] == 'N' || temp[0] == 'O')
			time += 7;

		else if (temp[0] == 'P' || temp[0] == 'Q' || temp[0] == 'R' || temp[0] == 'S')
			time += 8;

		else if (temp[0] == 'T' || temp[0] == 'U' || temp[0] == 'V')
			time += 9;

		else if (temp[0] == 'W' || temp[0] == 'X' || temp[0] == 'Y' || temp[0] == 'Z')
			time += 10;

	}

	cout << time;

	return 0;
}