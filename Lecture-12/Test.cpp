#include <iostream>
using namespace std;

int last7(int *a, int n, int i) {
	// base case
	if (i == n) {
		return -1;
	}
	// recursive case
	if (a[i] != 7) {
		return last7(a, n, i + 1);
	}
	else {
		return max(i, last7(a, n, i + 1));
	}
}

int main() {

	int a[] = {1, 7, 3, 4, 7, 7, 17};
	int n = sizeof(a) / sizeof(int);

	cout << last7(a, n, 0) << endl;

	return 0;
}
















