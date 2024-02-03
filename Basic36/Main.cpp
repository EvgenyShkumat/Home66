#include <iostream>
#define N 4
#define M 4
using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

string find_even_column(int matrix[N][M]);
string find_digaonal_column_sum(int matrix[N][M]);
int max_abs_sum_row(int matrix[N][M]);
int find_product_in_num_column(int matrix[N][M], int num);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 1, 9);

	int num = 7;

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << "Columns that have min product and they have only elements that are not more than "
		<< num << "(-1 = none): " << find_product_in_num_column(matrix, num) + 1;

	return 0;
}