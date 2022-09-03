// permutations2.cpp
class Solution {
public:
	void solve(int i, vector<int>& nums,
	           vector<vector<int>> &ans) {
		// base case
		if (i == nums.size()) {
			ans.push_back(nums);
			return;
		}
		// recursive case
		for (int j = i ; j < nums.size() ; j++) {
			bool KyaSwapHoneWalaMilla = false;
			int k;
			for (k = j + 1 ; k < nums.size() ; k++) {
				if (nums[i] == nums[k]) {
					KyaSwapHoneWalaMilla = true;
					break;
				}
			}
			if (KyaSwapHoneWalaMilla) {
				swap(nums[i], nums[k]);
				solve(i + 1, nums, ans);
				swap(nums[i], nums[k]);
			}
		}
	}

	vector<vector<int>> permuteUnique(vector<int>& nums) {
		vector<vector<int>> ans;
		sort(nums.begin(), nums.end());
		solve(0, nums, ans);
		return ans;
	}
};