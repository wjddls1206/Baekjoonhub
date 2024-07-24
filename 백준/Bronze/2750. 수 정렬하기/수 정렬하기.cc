#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int N;
	cin >> N;

	// 동적할당 
	int* arr = new int[N];

	// 입력받기
	for (int i = 0; i < N; i++) {

		int temp;
		cin >> temp;

		arr[i] = temp;

	}

	// 오름차순 정렬
	// sort() 함수
	// sort(배열의 시작점, 배열의 마지막 주소 + 1)
	sort(arr, arr + N);

	// 출력
	for (int i = 0; i < N; i++) {

		cout << arr[i] << endl;

	}

	// 동적할당 해제
	delete arr;

	return 0;
}