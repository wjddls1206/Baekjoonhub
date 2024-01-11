#include <iostream>
#include <string>

using namespace std;

int main() {

	long long int result = 0;
	int B;
	string N;

	int multip = 1;
	int temp;

	cin >> N >> B;

	for (int i = 0; i < N.length(); i++) {

		int temp = N[N.length() - i - 1];

		if (temp >= 'A' && temp <= 'Z')
			temp = temp - 'A' + 10;

		else
			temp -= '0';

		result += temp * multip;

		multip *= B;

	}

	cout << result;

	return 0;
}