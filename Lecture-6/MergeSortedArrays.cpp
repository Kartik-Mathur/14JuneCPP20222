// MergeSortedArrays.cpp
#include <iostream>
using namespace std;

void MergeSortedArrays(int a[], int m, int b[], int n) {
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;
	while (i >= 0 and j >= 0) { // and == &&
		if (a[i] < b[j]) {
			a[k] = b[j];
			k--;
			j--;
		}
		else {
			a[k--] = a[i--];
		}
	}

	while (j >= 0) {
		a[k--] = b[j--];
	}
}

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	int a[10] = {1, 4, 5, 7, 9};
	int m = 5;

	int b[] = {2, 3, 8, 10, 12};
	int n = sizeof(b) / sizeof(int);

	printArray(a, m);
	printArray(b, n);
	MergeSortedArrays(a, m, b, n);
	printArray(a, m + n);


	return 0;
}
















