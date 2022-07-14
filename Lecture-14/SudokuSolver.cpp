// SudokuSolver.cpp
#include <iostream>
#include <cmath>
using namespace std;

bool KyaSafeHai(int mat[][9], int i, int j, int n, int no) {
	for (int k = 0; k < n; ++k)
	{
		if (mat[i][k] == no || mat[k][j] == no) {
			return false;
		}
	}

	// Check the box
	n = sqrt(n);

	int si = (i / n) * n;
	int sj = (j / n) * n;

	for (int k = si; k < si + n; ++k)
	{
		for (int l = sj; l < sj + n; ++l)
		{
			if (mat[k][l] == no) {
				return false;
			}
		}
	}

	return true;
}

bool SudokuSolver(int mat[][9], int i, int j, int n) {
	// base case
	if (i == n) {
		// print the sudoku
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
		return true;
	}

	// recursive case
	// if we cover the entire row
	if (j == n) {
		return SudokuSolver(mat, i + 1, 0, n);
	}
	// if cell is already filled
	if (mat[i][j] != 0) {
		return SudokuSolver(mat, i, j + 1, n);
	}

	// Let's do the work for one empty cell
	for (int no = 1; no <= n; ++no)
	{
		if (KyaSafeHai(mat, i, j, n, no)) {
			mat[i][j] = no;
			bool KyaBaakiHua = SudokuSolver(mat, i, j + 1, n);
			if (KyaBaakiHua) {
				return true;
			}
			// Backtracking
			mat[i][j] = 0;
		}
	}
	return false;
}


int main() {

	int mat[9][9] =
	{	{5, 3, 0, 0, 7, 0, 0, 0, 0},
		{6, 0, 0, 1, 9, 5, 0, 0, 0},
		{0, 9, 8, 0, 0, 0, 0, 6, 0},
		{8, 0, 0, 0, 6, 0, 0, 0, 3},
		{4, 0, 0, 8, 0, 3, 0, 0, 1},
		{7, 0, 0, 0, 2, 0, 0, 0, 6},
		{0, 6, 0, 0, 0, 0, 2, 8, 0},
		{0, 0, 0, 4, 1, 9, 0, 0, 5},
		{0, 0, 0, 0, 8, 0, 0, 7, 9}
	};

	SudokuSolver(mat, 0, 0, 9);

	return 0;
}
















