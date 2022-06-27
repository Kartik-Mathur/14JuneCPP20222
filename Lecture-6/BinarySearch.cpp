// BinarySearch.cpp
#include <iostream>
using namespace std;

void printArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int BinarySearch(int a[], int n, int key) {
	int s = 0;
	int e = n - 1;

	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] == key) {
			return mid;
		}
		else if (a[mid] < key) {
			s = mid + 1;
		}
		else {
			e = mid - 1;
		}
	}
	return -1;
}

int main() {

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);

	printArray(a, n);

	int key;
	cin >> key;

	int ans = BinarySearch(a, n, key);

	if (ans == -1) {
		cout << "Key not found" << endl;
	}
	else {
		cout << "Key found at: " << ans << endl;
	}

	return 0;
}
















