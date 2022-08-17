#include <iostream>
#include <vector>
using namespace std;

void printAllLCS(const string &s1, const string &s2,
                 int dp[][100], int i, int j, char*ans, int k) {
	// base case
	if (k == -1) {
		cout << ans << endl;
		return;
	}
	// recursive case
	if (s1[i - 1] == s2[j - 1]) {
		ans[k] = s1[i - 1];
		printAllLCS(s1, s2, dp, i - 1, j - 1, ans, k - 1);
	}
	else {
		if (dp[i - 1][j] > dp[i][j - 1]) {
			printAllLCS(s1, s2, dp, i - 1, j, ans, k);
		}
		else if (dp[i - 1][j] < dp[i][j - 1]) {
			printAllLCS(s1, s2, dp, i, j - 1, ans, k);
		}
		else {
			printAllLCS(s1, s2, dp, i - 1, j, ans, k);
			printAllLCS(s1, s2, dp, i, j - 1, ans, k);
		}
	}
}

int bottomUp(const string &s1, const string &s2) {
	int dp[100][100] = {0};

	for (int i = 1; i <= s1.length(); ++i)
	{
		for (int j = 1; j <= s2.length(); ++j)
		{
			if (s1[i - 1] == s2[j - 1]) {
				dp[i][j] = 1 + dp[i - 1][j - 1];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
		}
	}

	for (int i = 0; i <= s1.length(); ++i)
	{
		for (int j = 0; j <= s2.length(); ++j)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}

	int ans = dp[s1.length()][s2.length()];
	char * v = new char[ans + 1];
	v[ans] = '\0';

	// int k = ans - 1;
	// int i = s1.length();
	// int j = s2.length();

	// while (k != -1) {
	// 	if (s1[i - 1] == s2[j - 1]) {
	// 		v[k] = s1[i - 1];
	// 		k--;
	// 		i--;
	// 		j--;
	// 	}
	// 	else {
	// 		dp[i - 1][j] > dp[i][j - 1] ? i-- : j--;
	// 	}
	// }
	// cout << v << endl;

	printAllLCS(s1, s2, dp, s1.length(), s2.length(), v, ans - 1);

	return dp[s1.length()][s2.length()];
}

int main() {

	string s1 = "abcxd";
	string s2 = "abdxd";

	cout << bottomUp(s1, s2) << endl;

	return 0;
}
















