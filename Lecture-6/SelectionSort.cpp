// SelectionSort.cpp
#include <iostream>
using namespace std;

void SelectionSort(int a[], int n) {
	for (int i = 0; i < n - 1; ++i)
	{
		int m = i;
		for (int j = i + 1; j < n; ++j)
		{
			if (a[j] < a[m]) {
				m = j;
			}
		}
		swap(a[i], a[m]);
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

	int a[] = {1, 0, 13, 4, 15, 9, 8};
	int n = sizeof(a) / sizeof(int);
	printArray(a, n);
	SelectionSort(a, n);
	printArray(a, n);

	return 0;
}
















