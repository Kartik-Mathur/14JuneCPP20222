// WordSearch.cpp
class Solution {
public:

	bool solve(vector<vector<char>>& board, string &word,
	           int i, int j, int n, int m, int k) {
		// base case
		if (k == word.size()) {
			return true;
		}

		if ( i < 0 || j < 0 || i >= n || j >= m || board[i][j] != word[k]) {
			return false;
		}

		// recursive case
		char ch = board[i][j];
		board[i][j] = '.';
		int x[] = {0, 1, 0, -1};
		int y[] = {1, 0, -1, 0};
		bool ans = false;
		for (int l = 0; l < 4; ++l)
		{
			int ni = i + x[l];
			int nj = j + y[l];
			ans = solve(board, word, ni, nj, n, m, k + 1);
			if (ans == true) {
				break;
			}
		}
		board[i][j] = ch;
		return ans;
	}

	bool exist(vector<vector<char>>& board, string word) {
		int n = board.size();
		int m = board[0].size();

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				bool ans = solve(board, word, i, j, n, m, 0);
				if (ans) return ans;
			}
		}

		return false;

	}
};