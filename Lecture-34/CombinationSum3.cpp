// CombinationSum3.cpp
class Solution {
public:
	void solve(int s, int k, int target, vector<int>& temp,
	           vector<vector<int>> &ans) {
		// base case
		if (target == 0 and k == 0) {
			ans.push_back(temp);
			return;
		}
		if (k <= 0 || target <= 0) return;

		// recursive case
		for (int no = s; no <= 9 ; no++) {
			if (no <= target) {
				temp.push_back(no);
				solve(no + 1, k - 1, target - no, temp, ans);
				temp.pop_back();
			}
		}
	}
	vector<vector<int>> combinationSum3(int k, int n) {
		vector<int> temp;
		vector<vector<int>> ans;
		solve(1, k, n, temp, ans);
		return ans;
	}
};