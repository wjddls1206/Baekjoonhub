#include <iostream>

using namespace std;

int main() {

	int count;
	cin >> count;

	// 1 x 1 사이즈로 좌표를 나눔
	// 만약 그 칸이 사각형에 포함이 되는 부분이면 넓이인 1을 더하기
	// 포함이 되지 않는 부분이면 더하지 않음

	// 동적 배열 선언
	int** arr = new int* [count];

	for (int i = 0; i < count; i++) {

		arr[i] = new int[2];

	}

	// 입력값 ; 10 x 10 크기의 정사각형의 왼쪽 아래 꼭짓점 좌표
	int num1, num2;

	// 입력받은 정사각형 중 가장 오른쪽 위에 위치한 꼭짓점 좌표
	int max1, max2;
	max1 = 0;
	max2 = 0;

	for (int i = 0; i < count; i++) {

		// 입력받기
		cin >> num1 >> num2;

		// 선언한 동적배열에 정보 저장하기
		arr[i][0] = num1;
		arr[i][1] = num2;

		// 입력받을 때 마다 제일 오른쪽 위에 있는 꼭짓점 좌표 설정해주기
		if (num1 + 10 > max1)
			max1 = num1 + 10;

		if (num2 + 10 > max2)
			max2 = num2 + 10;

	}

	int** arr2 = new int* [max2 + 1];

	for (int i = 0; i < max2 + 1; i++) {

		arr2[i] = new int[max1 + 1];

	}

	for (int i = 0; i < max2 + 1; i++) {

		for (int j = 0; j < max1 + 1; j++) {

			arr2[i][j] = 0;

		}

	}

	for (int i = 0; i < count; i++) {

		int n1 = arr[i][0];
		int n2 = arr[i][1];

		for (int j = 1; j < 11; j++) {

			for (int k = 1; k < 11; k++) {

				arr2[n2 + k][n1 + j] = 1;

			}

		}

	}

	int result = 0;

	for (int i = 1; i < max2 + 1; i++) {

		for (int j = 1; j < max1 + 1; j++) {

			if (arr2[i][j] == 1)
				result += 1;

		}

	}

	cout << result;

	for (int i = 0; i < count; i++)
		delete[] arr[i];

	delete[] arr;

	for (int i = 0; i < max2 + 1; i++)
		delete[] arr2[i];

	delete[] arr2;

	return 0;
}