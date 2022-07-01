// MaximumSumSubarray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 8, -5, 13, -10, 8};
	int n = sizeof(a) / sizeof(int);
	int csum[1000] = {0};

	// Computation
	csum[0] = 0;
	for (int i = 0; i < n; ++i)
	{
		csum[i + 1] = csum[i] + a[i];
	}
	int s = -1, e = -1;
	int max_sum = INT_MIN;
	// Maximum Sum Subarray
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			// To find the sum of range from [i,j]
			int ans = csum[j + 1] - csum[i];
			if (ans > max_sum) {
				max_sum = ans;
				s = i;
				e = j;
			}
		}
	}

	cout << "Maximum Sum: " << max_sum << endl;
	for (int i = s; i <= e; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}
















