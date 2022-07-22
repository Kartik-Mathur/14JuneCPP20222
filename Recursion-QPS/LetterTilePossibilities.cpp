class Solution {
public:
	int solve(vector<int> freq) {
		int ans = 0;
		for (int i = 0; i < 26 ; i++) {
			if (freq[i] > 0) {
				freq[i] --;
				ans += solve(freq) + 1;
				freq[i]++; // backtracking
			}
		}
		return ans;
	}

	int numTilePossibilities(string tiles) {
		vector<int> freq(26, 0);
		for (int i = 0 ; i < tiles.length() ; i++) {
			char ch = tiles[i];
			int indx = ch - 'A';
			freq[indx] ++;
		}
		return solve(freq);
	}
};