#include <iostream>
using namespace std;

int knapsack(int *price, int *wt, int n, int capacity, int dp[][100]) {
	// base case
	if (n == 0 || capacity == 0) {
		return dp[n][capacity] = 0;
	}

	if (dp[n][capacity] != -1) {
		return dp[n][capacity];
	}

	// recursive case
	int op1, op2;
	op1 = op2 = INT_MIN;
	if (wt[n - 1] <= capacity) {
		op1 = price[n - 1] + knapsack(price, wt, n - 1, capacity - wt[n - 1], dp);
	}
	op2 = 0 + knapsack(price, wt, n - 1, capacity, dp);
	return dp[n][capacity] = max(op1, op2);
}

int bottomUp(int *price, int *wt, int n, int capacity) {
	int dp[100][100] = {0};
	int op1, op2;
	for (int N = 1; N <= n; ++N)
	{
		for (int cap = 1; cap <= capacity; ++cap)
		{
			op1 = op2 = INT_MIN;
			if (wt[N - 1] <= cap) {
				op1 = price[N - 1] + dp[N - 1][cap - wt[N - 1]];
			}
			op2 = 0 + dp[N - 1][cap];
			dp[N][cap] = max(op1, op2);
		}
	}

	for (int N = 0; N <= n; ++N)
	{
		for (int cap = 0; cap <= capacity; ++cap)
		{
			cout << dp[N][cap] << " ";
		}
		cout << endl;
	}

	return dp[n][capacity];
}

int main() {

	int price[] = {4, 6, 3, 5};
	int wt[] = {2, 3, 4, 2};
	int capacity = 6;
	int dp[100][100];
	memset(dp, -1, sizeof dp);
	int n = sizeof(price) / sizeof(int);

	cout << knapsack(price, wt, n, capacity, dp) << endl;
	cout << bottomUp(price, wt, n, capacity) << endl;

	return 0;
}
















