#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	vector<pair<int, string>> v;

	for (int i = 0; i < N; i++) {

		string input;
		cin >> input;


		v.push_back(make_pair(input.size(), input));

	}

	sort(v.begin(), v.end());

	string before = "";

	for (int i = 0; i < N; i++) {

		if(before != v[i].second)
			cout << v[i].second << "\n";

		before = v[i].second;

	}

	return 0;
}