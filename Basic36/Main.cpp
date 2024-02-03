#include <iostream>
#define N 4
#define M 4
using namespace std;

void random_matrix_init(int matrix[N][M], int min, int max);
string convert_matrix_to_string(int matrix[N][M]);

string find_even_column(int matrix[N][M]);

int main() {
	int matrix[N][M];

	random_matrix_init(matrix, 0, 9);

	string msg = find_even_column(matrix) == "" ? "There is no column that have only even numbers"
		: "Columns that have only even elements:\n" + find_even_column(matrix);

	cout << "Matrix:\n" << convert_matrix_to_string(matrix);
	cout << msg;

	return 0;
}