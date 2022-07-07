// Check7.cpp
#include <iostream>
using namespace std;

bool Check7(int *a, int n) {
	// base case
	if (n == 0) {
		return false;
	}
	// recursive case
	if (a[0] == 7) {
		return true;
	}
	return Check7(a + 1, n - 1);
}

int main() {

	int a[] = {1, 2, 4, 6, 9};
	int n = sizeof(a) / sizeof(int);

	if (Check7(a, n)) {
		cout << "7 is present" << endl;
	}
	else {
		cout << "7 is not present" << endl;
	}


	return 0;
}
















