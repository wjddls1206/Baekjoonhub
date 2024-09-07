#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

int main() {

	int N, M;
	cin >> N >> M;

	set <string> data_set;
	int result = 0;

	for (int i = 0; i < N; i++) {

		string input;
		cin >> input;

		data_set.insert(input);

	}

	for (int i = 0; i < M; i++) {

		string find_input;
		cin >> find_input;

		set<string>::iterator iter;
		
		iter = data_set.find(find_input);

		if (iter != data_set.end())
			result += 1;

	}


	cout << result;

	return 0;
}