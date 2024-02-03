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

int find_column_abs_sum(int matrix[N][M], int column_index) {
	int sum = 0;

	for (int i = 0; i < N; i++)
	{
		sum += abs(matrix[i][column_index]);
	}

	return sum;
}

string find_digaonal_column_sum(int matrix[N][M]) {
	string msg = "";

	for (int i = 0; i < N; i++)
	{
		int sum = 0;

		if (matrix[i][i] < 0) {
			sum += find_column_abs_sum(matrix, i);
			msg += "Column: " + to_string(i + 1) + " Sum: " + to_string(sum) + "\n";
		}
	}

	if (msg == "") {
		msg = "There is no such columns";
	}

	return msg;
}

int find_column_product(int matrix[N][M], int column_index) {
	int product = 1;

	for (int i = 0; i < N; i++)
	{
		product *= matrix[i][column_index];
	}

	return product;
}

int find_product_in_num_column(int matrix[N][M], int num) {
	int min_product = 2147483646;
	int column_index = -2;

	for (int i = 0; i < M; i++)
	{
		bool flag = true;
		int current_product = 1;

		for (int j = 0; j < N; j++)
		{
			if (abs(matrix[j][i]) > num) {
				current_product = 1;
				break;
			}
			current_product *= matrix[j][i];
		}

		if (current_product == 1) {
			current_product = 2147483646;
		}

		if (current_product < min_product) {
			min_product = current_product;
			column_index = i;
		}
	}

	return column_index;
}

