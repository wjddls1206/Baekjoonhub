#include <iostream>
#include <vector>
// 2쌍의 값을 묶으려면 pair (#include <utility>)
// 3쌍의 값을 묶으려면 tuple (#inlcude <tuple>)
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	vector<tuple<int, int, string>> v;

	int number = 0;
	int age = 0;
	string name = "";

	for (int i = 0; i < N; i++) {

		cin >> age >> name;
		v.push_back(make_tuple(age, number, name));
		number += 1;

	}

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {

		// pair로 묶었을 때와 tuple로 묶었을 때의 출력 방식이 다름!!!
		cout << get<0>(v[i]) << " " << get<2>(v[i]) << "\n";

	}

	return 0;
}