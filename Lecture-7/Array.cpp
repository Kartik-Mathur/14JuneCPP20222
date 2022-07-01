// Array.cpp
#include <iostream>
using namespace std;

// void printArray(int arr[], int n) {
void printArray(int *arr, int n) {
	for (int i = 0; i < n; ++i)
	{
		// cout << *(arr + i) << " ";
		cout << arr[i] << " ";
	}
	cout << endl;

}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	printArray(a, n);

	return 0;
}














