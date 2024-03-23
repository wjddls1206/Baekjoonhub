#include <iostream>

using namespace std;

int main() {

	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int x = (b * f - e * c) / (b * d - a * e);
	int y = (a * f - d * c) / (a * e - b * d);

	cout << x << " " << y;

	return 0;
}