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

int main() {

	cout << NStairs(5) << endl;
	cout << NStairs(4) << endl;
	cout << NStairs(3) << endl;
	cout << NStairs(2) << endl;
	cout << NStairs(1) << endl;

	return 0;
}
















