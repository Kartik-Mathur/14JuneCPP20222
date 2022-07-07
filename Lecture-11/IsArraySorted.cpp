// IsArraySorted.cpp
#include <iostream>
using namespace std;

bool isSorted(int *a, int n) {
	// base case
	if (n == 0 || n == 1) {
		return true;
	}
	// recursive case
	bool KyaChotaSortedHai = isSorted(a + 1, n - 1);
	if (KyaChotaSortedHai == true and a[0] <= a[1]) {
		return true;
	}
	else {
		return false;
	}
}

bool isSorted1(int *a, int n, int i) {
	// base case
	if ( i == n - 1  || i == n) {
		return true;
	}
	// recursive case
	bool KyaChotaSortedHai = isSorted1(a, n, i + 1);
	if (KyaChotaSortedHai == true and a[i] <= a[i + 1]) {
		return true;
	}
	else {
		return false;
	}
}

int main() {

	int a[] = {1, 4, 5, 8, 9, 10, 11};
	int n = sizeof(a) / sizeof(int);

	if (isSorted1(a, n, 0)) {
		cout << "Sorted hai" << endl;
	}
	else {
		cout << "Sorted nhi hai" << endl;
	}


	return 0;
}
















