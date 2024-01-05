#include <iostream>

using namespace std;

int main() {

	double result = 0;
	double total = 0;

	for (int i = 0; i < 20; i++) {

		char subject[51];
		double score = 0;
		char grade[3];

		cin >> subject;
		cin >> score;
		cin >> grade;

		if (grade[0] == 'F') {

			total += score;
			// result += 0;

		}

		// else 
		if (grade[0] == 'A') {

			if (grade[1] == '+') {

				result += score * 4.5;
				total += score;

			}

			else {

				result += score * 4.0;
				total += score;

			}

		}

		else if (grade[0] == 'B') {

			if (grade[1] == '+') {

				result += score * 3.5;
				total += score;

			}

			else {

				result += score * 3.0;
				total += score;

			}

		}

		else if (grade[0] == 'C') {

			if (grade[1] == '+') {

				result += score * 2.5;
				total += score;

			}

			else {

				result += score * 2.0;
				total += score;

			}

		}

		else if (grade[0] == 'D') {

			if (grade[1] == '+') {

				result += score * 1.5;
				total += score;

			}

			else {

				result += score * 1.0;
				total += score;

			}

		}


	}

	cout << result / total ;

	return 0;
}