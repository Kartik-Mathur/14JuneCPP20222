// NStairs.cpp
#include <iostream>
using namespace std;

int NStairs(int n) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}
	return NStairs(n - 1) + NStairs(n - 2) + NStairs(n - 3);
}

int NStairs1(int n, int k) {
	if (n == 0) {
		return 1;
	}
	if (n < 0) {
		return 0;
	}

	int ans = 0;
	for (int i = 1; i <= k; ++i)
	{
		ans += NStairs1(n - i, k);
	}
	return ans;
}

int main() {

	cout << NStairs(5) << endl;
	cout << NStairs1(5, 3) << endl;

	cout << NStairs(4) << endl;
	cout << NStairs1(4, 3) << endl;

	cout << NStairs(3) << endl;
	cout << NStairs1(3, 3) << endl;

	cout << NStairs(2) << endl;
	cout << NStairs1(2, 3) << endl;

	return 0;
}
















