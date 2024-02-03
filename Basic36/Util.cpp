#include <iostream>
#include <string>
#define N 4
#define M 4

using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max) {
	srand(time(NULL));

	if (min > max) {
		swap(min, max);
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			matrix[i][j] = rand() % (max - min + 1) + min;
		}
	}
}

string convert_matrix_to_string(int matrix[N][M]) {
	string msg = "";

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			msg += to_string(matrix[i][j]) + " ";
		}
		msg += "\n";
	}

	return msg;
}

int max_abs_sum_row(int matrix[N][M]) {
	int max_sum = 0;
	int row_index = -2;

	for (int i = 0; i < N; i++)
	{
		bool flag = true;
		int sum = 0;

		for (int j = 0; j < M; j++)
		{
			if (matrix[i][j] % 2 == 0) {
				sum = 0;
				break;
			}
			sum += abs(matrix[i][j]);
		}

		if (sum > max_sum) {
			max_sum = sum;
			row_index = i;
		}
	}

	return row_index;
}