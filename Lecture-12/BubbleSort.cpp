#include <iostream>
using namespace std;

void BubbleSort(int *a, int n, int i) {
	if (i == n - 1) {
		return;
	}
	for (int j = 0; j < n - 1 - i; ++j)
	{
		if (a[j] > a[j + 1]) {
			swap(a[j], a[j + 1]);
		}
	}
	BubbleSort(a, n, i + 1);
}

void printArray(int *a, int n, int i) {
	if (i == n) {
		return;
	}
	cout << a[i] << " ";
	printArray(a, n, i + 1);
}

int main() {

	int a[] = {10, 4, 3, 5, 6, 9, 2, 8, 0 };
	int n = sizeof(a) / sizeof(int);

	printArray(a, n, 0);
	cout << endl;
	BubbleSort(a, n, 0);
	printArray(a, n, 0);
	cout << endl;

	return 0;
}
















