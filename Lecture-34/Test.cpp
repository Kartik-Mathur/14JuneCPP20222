class Solution {
public:
	bool isPalindrome(string &s) {
		int i = 0, j = s.length() - 1;
		while (i < j) {
			if (s[i++] != s[j--]) {
				return false;
			}
		}
		return true;
	}
	void solve(string &s, int i, vector<string> &temp,
	           vector<vector<string>> &ans) {
		// base case
		if (i == s.length()) {
			ans.push_back(temp);
			return;
		}
		// recursive case
		for (int j = i ; j <= s.length() ; j++) {
			string x = s.substr(i, j - i + 1);
			if (isPalindrome(x)) {
				temp.push_back(x);
				solve(s, j + 1, temp, ans);
				temp.pop_back();
			}
		}
	}

	vector<vector<string>> partition(string s) {
		vector<vector<string>> ans;
		vector<string> temp;
		solve(s, 0, temp, ans);

		return ans;
	}
};