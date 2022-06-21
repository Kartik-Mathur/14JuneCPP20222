// PrintAllPrimes.cpp
#include <iostream>
using namespace std;

int main() {

	int n, no, flag, i;
	cin >> n;

	for (no = 2; no <= n; ++no)
	{
		// cout << no << " ";
		flag = 0;
		for (i = 2; i <= no - 1; ++i)
		{
			if (no % i == 0) {
				flag = 1;
			}
		}

		if (flag == 0) {
			cout << no << " ";
		}

	}
	cout << endl;

	return 0;
}
















