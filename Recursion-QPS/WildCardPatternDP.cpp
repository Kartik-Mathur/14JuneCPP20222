// WildcardPattern.cpp
class Solution {
public:

	bool solve(string &s, string &p, int n, int m, int i, int j, vector<vector<int> > &dp) {
		// base case
		if (i >= s.length()) {
			for (int k = j; k < p.length(); ++k)
			{
				if (p[k] != '*') {
					return dp[i][j] = false;
				}
			}
			return dp[i][j] = true;
		}

		if (j >= p.length()) {
			return dp[i][j] = false;
		}
		if (dp[i][j] != -1) {
			return dp[i][j]  == 1;
		}

		// recursive case
		// Character could be ? or alphabet(a-z)
		bool ans = false;
		if (s[i] == p[j] || p[j] == '?') {
			ans = solve(s, p, n, m, i + 1, j + 1, dp);
		}
		else if (p[j] == '*') {
			bool match = solve(s, p, n, m, i + 1, j, dp);
			bool Dontmatch = solve(s, p, n, m, i, j + 1, dp);
			if (match == true || Dontmatch == true) {
				ans = true;
			}
		}

		if (ans) {
			dp[i][j] = 1;
		}
		else {
			dp[i][j] = 2;
		}

		return ans;
	}

	bool isMatch(string s, string p) {
		int n = s.length();
		int m = p.length();
		vector<vector<int> > dp(n + 1, vector<int>(m + 1, -1));

		return solve(s, p, n, m, 0, 0, dp);
	}
};
