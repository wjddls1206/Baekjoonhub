#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, string> m1;
    map<string, int> m2;

    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {

        string input_name;
        cin >> input_name;

        m1[i] = input_name;
        m2[input_name] = i;

    }

    for (int i = 0; i < M; i++) {

        string find_name;
        cin >> find_name;
        
        if (atoi(find_name.c_str()) == 0) {

            cout << m2[find_name] << "\n";

        }

        else {

            cout << m1[atoi(find_name.c_str())] << "\n";

        }


    }

    return 0;
}
