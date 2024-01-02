#include <iostream>

using namespace std;

int main() {

	// 시험 본 과목의 개수
	int N;
	cin >> N;

	// 시험 본 과목의 수 만큼 정수 배열 동적할당
	double* arr = new double[N];

	// 시험 점수 입력 받고 최댓값 M 찾기
	int num;
	double M = 0.0;

	for (int i = 0; i < N; i++) {

		cin >> num;
		arr[i] = (double)num;
		if (M < num)
			M = num;

	}

	// 배열 arr 에 고친 점수 넣고 평균값 구하기
	double sum = 0;

	for (int i = 0; i < N; i++) {

		arr[i] = arr[i] / M * 100.0;
		sum += arr[i];

	}

	// 평균 구하고 출력하기
	double avg = sum / (double)N;

	cout << avg;

	return 0;
}