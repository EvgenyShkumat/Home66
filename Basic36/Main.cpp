#include <iostream>
#define N 4
#define M 4
using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

string find_even_column(int matrix[N][M]);
string find_digaonal_column_sum(int matrix[N][M]);
int max_abs_sum_row(int matrix[N][M]);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 1, 9);


	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << "Rows that have max abs sum and they have only odd elements(-1 = none): "
		<< max_abs_sum_row(matrix) + 1;

	return 0;
}