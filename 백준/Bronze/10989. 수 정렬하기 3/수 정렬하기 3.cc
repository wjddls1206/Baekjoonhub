#include <iostream>

using namespace std;

int main() {

    // sort () 사용 불가능 => 공간 복잡도 문제

    // c와 c++의 표준 stream의 동기화를 끊는 역할 함
    // => cin 과 cout 의 속도가 높아짐 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // 1 <= N <= 10,000,000
    int N;
    cin >> N;

    // 입력받는 수는 10,000 보다 작거나 같은 자연수 
    int input[10001] = { 0 };

    // 입력받은 수는 input 배열의 인덱스
    // 해당 인덱스에 1을 더함으로써 해당 숫자가 몇번 들어왔는지 count 함
    for (int i = 0; i < N; i++) {
        int temp;
        cin >> temp;
        input[temp] += 1;
    }

    // input 배열의 0번 인덱스부터 10,000 인덱스까지 반복
    for (int i = 1; i < 10001; i++) {

        // i = 출력할 숫자 (=인덱스)
        // j = 해당 숫자를 몇번 출력해야하는지 count 세둔 횟수 
        for (int j = 0; j < input[i]; j++) {
            cout << i << '\n';
        }

    }

}