#include <iostream>
#include <unordered_map>

using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	unordered_map <int, int> m;

	for (int i = 0; i < N; i++) {

		int input;
		cin >> input;

		m[input] += 1;
		// cout << "m [" << input << "] : " << m[input] << endl;

	}

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {

		int temp;
		cin >> temp;

		cout << m[temp] << " ";

	}

	return 0;
}