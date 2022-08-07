// Fibo.cpp
#include <iostream>
using namespace std;

int fibo_rec(int n) {
	if (n <= 1) {
		return n;
	}

	// Calculate the smaller values and find the nth fibo
	return fibo_rec(n - 1) + fibo_rec(n - 2);
}

int fibo(int n, int *dp) {
	if (n <= 1) {
		dp[n] = n;
		return n;
	}
	// Calculate se pehle check
	if (dp[n] != -1) {
		return dp[n];
	}

	return dp[n] = fibo(n - 1, dp) + fibo(n - 2, dp);
}

int bottom_Up(int n) {
	int *dp = new int[n + 1];
	dp[0] = 0;
	dp[1] = 1;

	for (int i = 2; i <= n; ++i)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}

	for (int i = 0; i <= n; ++i)
	{
		cout << dp[i] << " ";
	}
	cout << endl;
	return dp[n];
}


int main() {

	int n;
	cin >> n;
	int dp[10000];
	memset(dp, -1, sizeof dp);

	cout << fibo(n, dp) << endl;
	cout << bottom_Up(n) << endl;
	cout << fibo_rec(n) << endl;

	return 0;
}