// Pattern01.cpp
#include <iostream>
using namespace std;

int main() {

	int n, row, i;
	cin >> n;
	int no;
	for (row = 1; row <= n; ++row)
	{
		// Check karo row odd hai ya even hai
		if (row % 2 == 0) {
			no = 0;
		}
		else {
			no = 1;
		}

		// work
		for (i = 1; i <= row; ++i)
		{
			cout << no << " ";
			no = 1 - no;
		}

		cout << endl;
	}

	return 0;
}
















