// WildcardPattern.cpp
class Solution {
public:

	bool solve(string &s, string &p, int n, int m, int i, int j) {
		// base case
		if (i >= s.length()) {
			for (int k = j; k < p.length(); ++k)
			{
				if (p[k] != '*') {
					return false;
				}
			}
			return true;
		}

		if (j >= p.length()) {
			return false;
		}

		// recursive case
		// Character could be ? or alphabet(a-z)
		bool ans = false;
		if (s[i] == p[j] || p[j] == '?') {
			ans = solve(s, p, n, m, i + 1, j + 1);
		}
		else if (p[j] == '*') {
			bool match = solve(s, p, n, m, i + 1, j);
			bool Dontmatch = solve(s, p, n, m, i, j + 1);
			if (match == true || Dontmatch == true) {
				ans = true;
			}
		}
		return ans;
	}

	bool isMatch(string s, string p) {
		int n = s.length();
		int m = p.length();

		return solve(s, p, n, m, 0, 0, dp);
	}
};













