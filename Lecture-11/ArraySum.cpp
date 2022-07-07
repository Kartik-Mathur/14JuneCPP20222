// ArraySum.cpp
#include <iostream>
using namespace std;

int ArraySum(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	int c_sum = ArraySum(a + 1, n - 1);
	return a[0] + c_sum;
}

int ArraySum1(int *a, int n, int i) {
	// base case
	if (i == n) {
		return 0;
	}
	// recursive case
	return ArraySum1(a, n, i + 1) + a[i];
}

int ArraySum2(int *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	return a[n - 1] + ArraySum2(a, n - 1);
}

int main() {

	int a[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);

	cout << ArraySum(a, n) << endl;
	cout << ArraySum1(a, n, 0) << endl;
	cout << ArraySum2(a, n) << endl;

	return 0;
}
















