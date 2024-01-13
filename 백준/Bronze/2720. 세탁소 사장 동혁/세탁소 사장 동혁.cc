#include <iostream>

using namespace std;

int main() {

	int quarter = 0;	// $ 25
	int dime = 0;		// $ 10
	int nickel = 0;		// $ 5
	int penny = 0;		// $ 1

	double charge = 0;

	int test_case = 0;
	cin >> test_case;

	double temp = 0;

	for (int i = 0; i < test_case; i++) {

		cin >> charge;

		temp = charge;
		double count = 0;

		while (true) {

			if (temp < 25) {
				// cout << "25보다 작음, 현재 남은 잔돈 : " << temp << endl;
				break;
			}

			else {

				count += 1;
				temp -= 25;
				// cout << "25보다 큼, 현재 남은 잔돈 : " << temp << "현재 quarter : " << count << endl;

			}

		}

		quarter = count;
		count = 0;

		while (true) {

			if (temp < 10) {
				// cout << "10보다 작음, 현재 남은 잔돈 : " << temp << endl;
				break;
			}

			else {

				count += 1;
				temp -= 10;
				// cout << "10보다 큼, 현재 남은 잔돈 : " << temp << "현재 dime : " << count << endl;


			}

		}

		dime = count;
		count = 0;

		while (true) {

			if (temp < 5) {
				// cout << "5보다 작음, 현재 남은 잔돈 : " << temp << endl;

				break;
			}

			else {

				count += 1;
				temp -= 5;
				// cout << "5보다 큼, 현재 남은 잔돈 : " << temp << "현재 nickel : " << count << endl;


			}

		}

		nickel = count;
		count = 0;

		while (true) {

			if (temp < 1) {
				// cout << "1보다 작음, 현재 남은 잔돈 : " << temp << endl;

				break;
			}

			else {

				count += 1;
				temp -= 1;
				// cout << "1보다 큼, 현재 남은 잔돈 : " << temp << "현재 penny : " << count << endl;


			}

		}

		penny = count;
		count = 0;

		cout << quarter << " " << dime << " " << nickel << " " << penny << endl;

		quarter = 0;	
		dime = 0;		
		nickel = 0;		
		penny = 0;		

	}

	return 0;
}