#include <iostream>

using namespace std;

int main() {

	long long int N;
	int B;

	cin >> N >> B;

	long long int copy = N;
	long long int temp = 0;
	long long int remain = 0;

	char result[10000] = { 0 };

	int i = 0;
	while (copy != 0) {

		temp = copy / B;
		//cout << "몫 : " << temp << " ";
		remain = copy % B;
		//cout << "나머지 : " << remain << " ";
		if (remain >= 10) {
			remain = remain - 10 + 'A';
		}

		else if (remain >= 0 && remain <= 9) {

			remain = '0' + remain;

		}
		//cout << "저장되는 값 : " << remain << " ";
		
		result[i] = remain;
		//cout << "result [ " << i << " ] : " << result[i] << endl;
		copy = temp;
		i++;

	}

	for (i--; i > -1; i--) {

		cout << result[i];

	}

	return 0;
}