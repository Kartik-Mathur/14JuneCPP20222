// First7.cpp
#include <iostream>
using namespace std;

int First7(int *a, int n) {
	// base case
	if (n == 0) {
		return -1;
	}
	// recursive case
	if (a[0] == 7) {
		return 0;
	}

	int ci = First7(a + 1, n - 1);
	return ci == -1 ? -1 : ci + 1;
}

int First7_1(int *a, int n, int i) {
	if (i == n) {
		return -1;
	}
	if (a[i] == 7) {
		return i;
	}
	return First7_1(a, n, i + 1);
}

int All7(int *a, int n, int i) {
	if (i == n) {
		return -1;
	}
	if (a[i] == 7) {
		cout << i << " " ;
	}
	return All7(a, n, i + 1);
}

int main() {

	int a[] = {1, 2, 4, 6, 7, 9, 7, 7, 7, 7};
	int n = sizeof(a) / sizeof(int);

	cout << First7(a, n) << endl;
	cout << First7_1(a, n, 0) << endl;
	All7(a, n, 0);
	cout << endl;

	return 0;
}
















