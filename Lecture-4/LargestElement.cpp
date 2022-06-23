// LargestElement.cpp
#include <iostream>
using namespace std;

int main() {
	int arr[] = {1, 5, 3, 22, 10};
	int n = 5;

	int largest = INT_MIN;

	for (int i = 0; i < n; ++i)
	{
		if (arr[i] > largest) {
			largest = arr[i];
		}
	}

	cout << "Largest: " << largest << endl;
	return 0;
}
















