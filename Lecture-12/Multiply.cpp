// Multiply.cpp
#include <iostream>
using namespace std;

int solve(int a, int b) {
	if (b == 0) {
		return 0;
	}

	return a + solve(a, b - 1);
}

int main() {

	cout << solve(5, 4) << endl;

	return 0;
}
















