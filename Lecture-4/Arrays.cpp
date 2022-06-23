// Arrays.cpp
#include <iostream>
using namespace std;

int main() {

	int a[500];
	int n = 5;
	// for (int i = 0; i < n; ++i)
	// {
	// 	a[i] = i + 1;
	// }
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	// a[0] = 1;
	// a[1] = 2;
	// a[2] = 3;
	// a[3] = 4;
	// a[4] = 5;
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	// cout << a[0] << " ";
	// cout << a[1] << " ";
	// cout << a[2] << " ";
	// cout << a[3] << " ";
	// cout << a[4] << " \n";


	return 0;
}
















