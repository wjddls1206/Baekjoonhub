#include <iostream>

using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;

	int result;

	if ((a == b) && (b == c)) // 3개 모두 같음
		result = 10000 + a * 1000;

	else if ((a == b) || (b == c))
		result = 1000 + b * 100;

	else if (c == a)
		result = 1000 + a * 100;

	else {

		int max = a;
		if (b >= c)
			max = a < b ? b : a;
		else
			max = a < c ? c : a;

		result = max * 100;

	}
	
	cout << result << endl;

	return 0;
}