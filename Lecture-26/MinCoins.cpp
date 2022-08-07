// MinCoins.cpp
#include <iostream>
#include <vector>
using namespace std;

int MinCoins(int * deno, int n, int amt, vector<int> &dp) {
	// base case
	if (amt == 0) {
		return dp[amt] = 0;
	}

	if (dp[amt] != -1) {
		return dp[amt];
	}

	// recursive case
	int ans = INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		int sikka = deno[i];
		if (amt >= sikka) {
			int chotiAmt = amt - sikka;
			int ChotaAns = MinCoins(deno, n, chotiAmt, dp);
			if (ChotaAns != INT_MAX)
				ans = min(ans, ChotaAns + 1);
		}
	}
	return dp[amt] = ans;
}

int bottomUp(int totalRupay, int *deno, int n) {
	vector<int> dp(totalRupay + 1, INT_MAX);
	dp[0] = 0;

	for (int amt = 1; amt <= totalRupay; ++amt)
	{
		int ans = INT_MAX;
		for (int i = 0; i < n; ++i)
		{
			int sikka = deno[i];
			if (amt >= sikka) {
				int ChotiAmt = amt - sikka;
				ans = min(ans, dp[ChotiAmt]);
			}
		}
		if (ans != INT_MAX) {
			dp[amt] = ans + 1;
		}
	}

	for (int i = 0; i <= totalRupay; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;
	return dp[totalRupay];
}

int main() {

	int deno[] = {1, 5, 7};
	int n = sizeof(deno) / sizeof(int);
	vector<int> dp(100000, -1);

	cout << MinCoins(deno, n, 14, dp) << endl;
	cout << bottomUp(10, deno, n) << endl;

	return 0;
}
















