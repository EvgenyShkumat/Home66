#include <iostream>
#define N 4
#define M 4
using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

string find_even_column(int matrix[N][M]);
int find_column_sum(int matrix[N][M], int column_index);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 0, 9);

	
	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << "1st column sum " << find_column_sum(matrix, 0);

	return 0;
}