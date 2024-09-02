#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	//typedef pair <int, int> p;
	//vector<p> arr;

	vector<pair<int, int>> arr;

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {

		int x_i, y_i;
		cin >> x_i >> y_i;

		arr.push_back(pair<int, int>(x_i, y_i));

	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < arr.size(); i++) {

		cout << arr[i].first << " " << arr[i].second << "\n";

	}

	return 0;
}