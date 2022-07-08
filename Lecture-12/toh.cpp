// toh.cpp
#include <iostream>
using namespace std;

void toh(int n, char src, char helper, char des) {
	// base case
	if (n == 0) {
		return;
	}
	// recursive case
	// 1. Move n-1 disks from src to helper
	toh(n - 1, src, des, helper);
	// 2. Take nth disk manually from src to des
	cout << "Taking disk " << n << " from " << src << " to " << des << endl;
	// 3. Move n-1 disks from helper to des
	toh(n - 1, helper, src, des);
}

int main() {

	int n;
	cin >> n;

	toh(n, 'A', 'B', 'C');

	return 0;
}
















