#include <iostream>
#include <cmath>

using namespace std;

int main() {

	long long int A, B, V;
	cin >> A >> B >> V;

	if ((V - A) % (A - B) == 0)
		cout << (V - A) / (A - B) + 1;
	else
		cout << (V - A) / (A - B) + 2;

	// true : 낮  /  false : 밤
	//bool flag = true;

	/*
	* O(1) 안에 풀어야 하므로 반복문은 쓸 수 없어...
	* 
	while (true) {

		if (current >= V)
			break;

		else {

			if (flag == true) {

				current += A;
				flag = false;

			}

			else {

				current -= B;
				day += 1;
				flag = true;

			}

		}

	}

	if (flag == false)
		day += 1;
	*/

	return 0;
}