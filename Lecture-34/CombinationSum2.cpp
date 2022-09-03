// CombinationSum1.cpp
class Solution {
public:
	void solve(int i, vector<int>& candidates, int target,
	           vector<int>& temp, vector<vector<int>> &ans) {
		// base case
		if (target == 0) {
			ans.push_back(temp);
			return;
		}
		// recursive case
		for (int j = i ; j < candidates.size() ; j++) {
			if ((j == i || a[j] != a[j - 1]) and candidates[j] <= target) {
				temp.push_back(candidates[j]);
				solve(j + 1, candidates, target - candidates[j], temp, ans);
				temp.pop_back();
			}
		}

	}
	vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
		vector<int> temp;
		vector<vector<int>> ans;
		solve(0, candidates, target, temp, ans);
		return ans;
	}
};