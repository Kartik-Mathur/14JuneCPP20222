class Solution {
public:
	void solve(int s, int n, int k, vector<int> &temp,
	           vector<vector<int>> &ans) {
		// base case
		if (k == 0) {
			ans.push_back(temp);
			return;
		}
		// recursive case
		for (int i = s; i <= n ; i++) {
			temp.push_back(i);
			solve(i + 1, n, k - 1, temp, ans);
			temp.pop_back();
		}
	}
	vector<vector<int>> combine(int n, int k) {
		vector<vector<int>> ans;
		vector<int> temp;
		solve(1, n, k, temp, ans);
		return ans;
	}
};