#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	int N, M;
	cin >> N >> M;

	char board[50][50];

	char WB[8][8] = {

		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'

	};

	char BW[8][8] = {

		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
		'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
		'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'

	};

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < M; j++) {

			cin >> board[i][j];

		}

	}

	int answer = 64;

	for (int i = 0; i <= N - 8; i++) {

		for (int j = 0; j <= M - 8; j++) {

			int WB_count = 0, BW_count = 0;
			for (int x = 0; x < 8; x++) {

				for (int y = 0; y < 8; y++) {

					if (board[x + i][y + j] != WB[x][y])
						WB_count++;
					if (board[x + i][y + j] != BW[x][y])
						BW_count++;

				}

			}

			int temp = min(WB_count, BW_count);
			if (temp < answer)
				answer = temp;

		}

	}

	cout << answer;

	return 0;
}