// NQueen.cpp
#include <iostream>
using namespace std;

bool SafeHai(int board[][100], int i, int j, int n) {
	// Check rows and columns
	for (int k = 0; k < n; ++k)
	{
		if (board[i][k] || board[k][j]) {
			return false;
		}
	}

	int l = i, m = j;
	// Check the upper right diagonal
	while (i >= 0 and j < n) {
		if (board[i][j]) {
			return false;
		}
		i--;
		j++;
	}
	// Check the upper left diagonal
	while (l >= 0 and m >= 0) {
		if (board[l][m]) {
			return false;
		}
		l--;
		m--;
	}
	return true;

}

bool NQueen(int board[][100], int i, int n) {
	// base case
	if (i == n) {
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (board[i][j] == 1) {
					cout << "Q ";
				}
				else {
					cout << "_ ";
				}
			}
			cout << endl;
		} cout << endl;
		return false;
	}

	// recursive case
	for (int j = 0; j < n; ++j)
	{
		if (SafeHai(board, i, j, n)) {
			board[i][j] = 1;
			bool KyaBaakiPlaceHui = NQueen(board, i + 1, n);
			if (KyaBaakiPlaceHui == true) {
				return true;
			}
			board[i][j] = 0; // Backtracking
		}
	}
	return false;
}


int main() {

	int n;
	cin >> n;
	int board[100][100] = {0};
	NQueen(board, 0, n);

	return 0;
}
















