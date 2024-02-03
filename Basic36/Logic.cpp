#include <iostream>
#include <string>
#define N 4
#define M 4
using namespace std;

string find_even_column(int matrix[N][M]) {
	string msg = "";

	for (int i = 0; i < M; i++)
	{
		bool flag = true;

		for (int j = 0; j < N; j++)
		{
			if(matrix[j][i] % 2 == 1) {
				flag = false;
			}
		}

		if (flag) {
			msg += "Column " + to_string(i + 1) + "\n";
		}
	}

	return msg;
}

int find_column_sum(int matrix[N][M], int column_index) {
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += matrix[i][column_index];
	}

	return sum;
}

