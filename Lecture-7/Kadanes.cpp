// Kadanes.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 8, -5, 13, -10, 8};
	int n = sizeof(a) / sizeof(int);

	int ans = INT_MIN;

	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
		ans = max(sum, ans);

		if (sum < 0) {
			sum = 0;
		}
	}

	cout << "Maximum Sum: " << ans << endl;

	return 0;
}
















