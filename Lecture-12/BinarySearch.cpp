#include <iostream>
using namespace std;

int BinarySearch(int *a, int s, int e, int key) {
	// base case
	if (s > e) {
		return -1;
	}

	// recursive case
	int m = (s + e) / 2;
	if (a[m] == key) {
		return m;
	}
	else if (key > a[m]) {
		return BinarySearch(a, m + 1, e, key);
	}
	else {
		return BinarySearch(a, s, m - 1, key);
	}
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	int key = 0;

	cout << BinarySearch(a, 0, n - 1, key) << endl;


	return 0;
}
















