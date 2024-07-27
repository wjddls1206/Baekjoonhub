#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	// N : 학생 수
	// k : 상을 받는 사람 
	// 커트라인 : 상을 받는 사람들 중 점수가 가장 낮은 사람의 점수
	int N, k;
	cin >> N >> k;

	// 동적배열로 학생 N명의 점수 입력받기
	int* score = new int[N];
	
	int temp = 0;

	for (int i = 0; i < N; i++) {

		cin >> temp;
		score[i] = temp;

	}

	// 오름차순 정렬
	//sort(score, score + N);

	// 내림차순 정렬
	sort(score, score + N, greater<int>());

	cout << score[k - 1];

	return 0;
}