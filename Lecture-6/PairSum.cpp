// PairSum.cpp
#include <iostream>
using namespace std;

int main() {

	int a[] = {1, 2, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	int X = 6;

	for (int i = 0; i < n; ++i)
	{
		int no1 = a[i];
		int no2 = X - no1;
		for (int j = i; j < n; ++j)
		{
			if (a[j] == no2) {
				cout << no1 << "," << no2 << endl;
			}
		}
	}

	return 0;
}
















