#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main() {

	int n;
	cin >> n;

	set <string, greater<string>> s;

	for (int i = 0; i < n; i++) {

		string name;
		string state;

		cin >> name;
		cin >> state;

		if (state == "enter")
			s.insert(name);

		else if (state == "leave")
			s.erase(name);  // leave 상태일 경우 해당 이름을 제거
	}

	for (const auto& name : s) {
		cout << name << "\n";
	}

	return 0;
}