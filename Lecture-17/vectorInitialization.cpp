// vector - initialization.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

	// Initialization way: 1
	// vector<int> v = {1, 2, 3, 4, 5};

	// Initialization way: 2, using array
	// int a[] = {1, 2, 3, 4, 5, 6, 7};
	// int n = sizeof(a) / sizeof(int);

	// vector<int> v(a, a + n);

	// Initialization way: 3
	vector<int> v({1, 2, 3, 4, 5});

	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















