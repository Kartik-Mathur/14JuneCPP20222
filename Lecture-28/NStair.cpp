#include <iostream>
#include <vector>
using namespace std;

int Nstairs(int n, int k) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += Nstairs(n - i, k);
	}
	return ans;
}

int bottomUp(int N, int k) {
	int *dp = new int[N + 1] {0};

	dp[0] = 1;
	for (int n = 1; n <= N; ++n)
	{
		int ans = 0;
		for (int i = 1; i <= k; ++i)
		{
			ans += (n - i) >= 0 ? dp[n - i] : 0;
		}
		dp[n] = ans;
	}

	for (int i = 0; i <= N; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;
	return dp[N];
}

int fasterStairs(int n, int k) {
	vector<int> dp(n + 1);
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = 2 * dp[i - 1] - ((i - 1 - k) >= 0 ? dp[i - 1 - k] : 0);
	}

	for (int i = 0; i <= n; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;

	return dp[n];

}

int main() {

	cout << Nstairs(15, 4) << endl;
	cout << bottomUp(15, 4) << endl;
	cout << fasterStairs(15, 4) << endl;

	return 0;
}
















