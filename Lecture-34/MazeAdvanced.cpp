// RatInMaze.cpp
#include <iostream>
using namespace std;

bool RatInMaze(char maze[][100], int i, int j, int n, int m, int sol[][100]) {
	// base case
	if (i == n - 1 and j == m - 1) {
		sol[i][j] = 1;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << sol[i][j] << " ";
			} cout << endl;
		} cout << endl;
		sol[i][j] = 0;
		return false;
	}

	// recursive case
	sol[i][j] = 1;
	// Right side
	if (j + 1 < m and maze[i][j + 1] != 'X' and sol[i][j + 1] != 1) {
		bool kyaRightSeRaastaMilla = RatInMaze(maze, i, j + 1, n, m, sol);
		if (kyaRightSeRaastaMilla == true) {
			return true;
		}
	}
	// Down side
	if (i + 1 < n and maze[i + 1][j] != 'X' and sol[i + 1][j] != 1) {
		bool kyaNeecheSeRaastaMilla = RatInMaze(maze, i + 1, j, n, m, sol);
		if (kyaNeecheSeRaastaMilla == true) {
			return true;
		}
	}
	// Up side
	if (i - 1 >= 0 and maze[i - 1][j] != 'X' and sol[i - 1][j] != 1) {
		bool kyaUparSeRaastaMilla = RatInMaze(maze, i - 1, j, n, m, sol);
		if (kyaUparSeRaastaMilla) return true;
	}
	// backwards side
	if (j - 1 >= 0 and maze[i][j - 1] != 'X' and sol[i][j - 1] != 1) {
		bool kyaPeecheSeRaastaMilla = RatInMaze(maze, i, j - 1, n, m, sol);
		if (kyaPeecheSeRaastaMilla) return true;
	}
	sol[i][j] = 0;
	return false;
}

int main() {

	char maze[][100] = {
		"000X000",
		"0X0X0X0",
		"0X0X0X0",
		"000X0X0",
		"0XXX0X0",
		"00000X0",
	};
	int sol[100][100] = {0};
	RatInMaze(maze, 0, 0, 6, 7, sol);

	return 0;
}
















