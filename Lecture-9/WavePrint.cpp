// WavePrint.cpp
#include <iostream>
using namespace std;

void WavePrint(int a[10][10], int n, int m) {
	for (int c = 0; c < m; ++c)
	{
		if (c % 2 == 0) {
			for (int row = 0; row < n; ++row)
			{
				cout << a[row][c] << " ";
			}
		}
		else {
			for (int row = n - 1; row >= 0 ; --row)
			{
				cout << a[row][c] << " ";
			}
		}
	}
}

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

	WavePrint(a, n, m);



	return 0;
}
















