// PatternABC.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, i, j;
	char ch;
	cin >> n;
	for (row = 1; row <= n; ++row)
	{
		// work
		// Increasing characters
		ch = 'A';
		for (i = 1; i <= n - row + 1; ++i)
		{
			cout << ch ;
			ch++;
		}

		// Decreasing characters
		ch = ch - 1;
		for (i = 1; i <= n - row + 1; ++i)
		{
			cout << ch ;
			ch--;
		}

		cout << endl;
	}

	return 0;
}
















