// 2DArray.cpp
#include <iostream>
using namespace std;

int main() {

	int a[10][10];
	int n, m;

	cout << "Enter rows and cols: ";
	cin >> n >> m;
	/*
	for (int r = 0; r < n; ++r)
	{
		for (int c = 0; c < m; ++c)
		{
			cin >> a[r][c];
		}
	}
	*/
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


	/*
	int a[][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	for (int r = 0; r < 3; ++r)
	{
		for (int c = 0; c < 3; ++c)
		{
			cout << a[r][c] << " ";
		}
		cout << endl;
	}
	*/
	return 0;
}
















