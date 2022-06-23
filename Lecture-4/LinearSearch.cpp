// LinearSearch.cpp
#include <iostream>
using namespace std;

int main() {

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int n = 10, key = 700;

	int i, flag;
	flag = 0;
	for (i = 0; i < n; ++i)
	{
		if (arr[i] == key) {
			cout << "Key found at index: " << i << endl;
			flag = 1;
		}
	}

	if (flag == 0) {
		cout << "Key not found" << endl;
	}


	return 0;
}
















