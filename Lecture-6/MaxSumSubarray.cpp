// MaxSumSubarray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = { -1, 8, -5, 13, -10, 8};
	int n = sizeof(a) / sizeof(int);
	int start = -1, end = -1;
	int ans = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			int sum = 0;
			for (int k = i; k <= j; ++k)
			{
				sum += a[k];
			}
			if (sum > ans) {
				ans = sum;
				start = i;
				end = j;
			}
		}
	}

	cout << "Maximum Sum: " << ans << endl;
	for (int i = start; i <= end; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















