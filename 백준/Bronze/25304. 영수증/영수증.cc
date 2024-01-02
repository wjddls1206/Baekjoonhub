#include <iostream>

using namespace std;

int main() {

	int total_price, total_kind;
	//   최종 금액  구매한 물건의 종류의 수

	int cal_price = 0;

	cin >> total_price;
	cin >> total_kind;

	for (int i = 0; i < total_kind; i++) {

		int price, quantity;

		cin >> price;
		cin >> quantity;

		for (int j = 0; j < quantity; j++) {

			cal_price += price;

		}

	}

	if (total_price == cal_price) {
		cout << "Yes";
	}

	else {
		cout << "No";
	}

	return 0;
}