#include <iostream>
#include <unordered_set>
#include <vector>

// unordered_set
// 원소들이 정렬되어 있지 않음
// 해시 테이블로 구현됨
// insert, erase, find 모두 O(1)

using namespace std;

int main() {
    int N;
    cin >> N;

    unordered_set<int> sampleSet;

    for (int i = 0; i < N; i++) {
        int input;
        cin >> input;
        sampleSet.insert(input);
    }

    int M;
    cin >> M;

    vector<int> result;

    for (int i = 0; i < M; i++) {
        int input;
        cin >> input;
        if (sampleSet.find(input) != sampleSet.end())
            result.push_back(1);
        else
            result.push_back(0);
    }

    for (int i = 0; i < M; i++) {

        cout << result[i] << " ";

    }

    return 0;
}
