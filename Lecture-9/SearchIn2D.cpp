// SearchIn2D.cpp
#include <iostream>
using namespace std;

int main() {
	int a[10][10];
	int n, m, key;
	cout << "Enter rows and cols: ";
	cin >> n >> m;
	int number = 1;
	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			a[r][c] = number++;
		}
	}
	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			cout << a[r][c] << " ";
		}
		cout << endl;
	}

	cout << "Enter key: ";
	cin >> key;
	bool keyFound = false;
	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			if (a[r][c] == key) {
				cout << "Key found at : " << r << ", " << c << endl;
				keyFound = true;
				break;
			}
		}
		if (keyFound == true) {
			break;
		}
	}

	if (keyFound == false) {
		cout << "Key not found" << endl;
	}

	return 0;
}
















