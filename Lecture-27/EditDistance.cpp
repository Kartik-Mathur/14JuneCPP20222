// EditDistance.cpp
#include <iostream>
#include <vector>
using namespace std;

int editDistance(char *s1, char *s2, int i, int j, int dp[][100]) {
	// base case
	if (i == 0) {
		return j;
	}
	if (j == 0) {
		return i;
	}
	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	// recursive case
	if (s1[i - 1] == s2[j - 1]) {
		return dp[i][j] = editDistance(s1, s2, i - 1, j - 1, dp);
	}
	else {
		return dp[i][j] = min(
		                      editDistance(s1, s2, i - 1, j, dp), // Deletion
		                      min(editDistance(s1, s2, i, j - 1, dp), // Insertion
		                          editDistance(s1, s2, i - 1, j - 1, dp)) // Replace
		                  ) + 1;
	}
}

int bottomUp(char *s1, char*s2) {
	int n = strlen(s1);
	int m = strlen(s2);

	vector<vector<int> > dp(n + 1, vector<int>(m + 1, 0));
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			if (i == 0 and j == 0) dp[i][j] = 0;
			else if (i == 0) dp[i][j] = j;
			else if (j == 0) dp[i][j] = i;
			else {
				if (s1[i - 1] == s2[j - 1]) dp[i][j] = dp[i - 1][j - 1];
				else {
					int op1 = dp[i - 1][j]; // deletion
					int op2 = dp[i][j - 1]; // Insertion
					int op3 = dp[i - 1][j - 1]; // replace
					dp[i][j] = min(op1, min(op2, op3)) + 1;
				}
			}
		}
	}

	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= m; ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	return dp[n][m];
}


int main() {

	char s1[] = "abcd";
	char s2[] = "acc";
	int dp[100][100];
	memset(dp, -1, sizeof dp);

	cout << editDistance(s1, s2, strlen(s1), strlen(s2), dp) << endl;
	cout << bottomUp(s1, s2) << endl;

	return 0;
}
















