#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int N;
    cin >> N;

    vector<int> x(N);
    vector<int> sorted_x;
    vector<int> result(N);

    // 입력 배열 x
    for (int i = 0; i < N; i++) {
        cin >> x[i];
    }

    // 정렬된 배열을 만들기 위해 복사
    sorted_x = x;
    sort(sorted_x.begin(), sorted_x.end());

    // 중복 제거된 정렬된 배열
    // 중복되는 원소들은 맨 뒤로 오름차순 정렬됨
    // ex) 1 2 3 4 1 1 2 3 4
    //            / 중복되는 원소들
    vector<int> unique_sorted_x = sorted_x;

    // unique가 끝나고 반환하는 값 : vector의 쓰레기 값의 첫 번째 위치
    // 따라서 중복되는 원소들만 unique_sorted_x 벡터에서 삭제됨
    unique_sorted_x.erase(unique(unique_sorted_x.begin(), unique_sorted_x.end()), unique_sorted_x.end());

    // 각 원소에 대한 순위 매기기
    for (int i = 0; i < N; i++) {
        // 이진 탐색을 통해 원소 x[i]보다 작은 값의 개수 찾기
        // lower_bound : 찾으려는 key 값보다 같거나 큰 숫자가 배열 몇 번째에서 처음 등장하는지 찾기위함
        // -> 사용하기 위해서는 오름차순 정렬되어 있어야 함.
        int count = lower_bound(unique_sorted_x.begin(), unique_sorted_x.end(), x[i]) - unique_sorted_x.begin();
        result[i] = count;
    }

    // 결과 출력
    for (int i = 0; i < N; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
