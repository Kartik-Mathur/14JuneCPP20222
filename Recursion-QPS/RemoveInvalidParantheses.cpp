class Solution {
public:
	set<string> st;
	unordered_map<int, vector<string> > m;
	int mx = -1;
	void solve(string &s, int open, int close, int i, string &ans) {
		// base case
		if (close > open) {
			return;
		}
		if (i == s.size()) {
			if (open == close) {
				// cout << open << ", " << close << ": ";
				// cout << ans << endl;
				mx = max((int)ans.length(), mx);
				if (st.count(ans) == 0) {
					m[ans.length()].push_back(ans);
				}
				st.insert(ans);

			}
			return;
		}

		// Recursive case
		if (s[i] != '(' && s[i] != ')') {
			ans.push_back(s[i]);
			solve(s, open, close, i + 1, ans);
			ans.pop_back();
		}
		else {
			// open bracket hoga
			if (s[i] == '(') {
				// ek baari opening ko lena hai
				ans.push_back(s[i]);
				solve(s, open + 1, close, i + 1, ans);
				ans.pop_back();

				// ek baari opening ko nhi lena hai
				solve(s, open, close, i + 1, ans);
			}
			else {
				// ya toh close bracket hoga
				ans.push_back(s[i]);
				solve(s, open, close + 1, i + 1, ans);
				ans.pop_back();

				// ek baari close ko include mat krna
				solve(s, open, close, i + 1, ans);
			}
		}
	}
	vector<string> removeInvalidParentheses(string s) {
		string ans = "";
		solve(s, 0, 0, 0, ans);
		vector<string> v;
		for (auto n : m[mx]) {
			v.push_back(n);
		}
		return v;
	}
};













