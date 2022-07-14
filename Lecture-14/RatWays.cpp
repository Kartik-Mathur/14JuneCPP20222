// RatWays.cpp
#include <iostream>
using namespace std;
int ways(int i, int j) {
	if (i == 0 and j == 0) {
		return 1;
	}

	if (i < 0 || j < 0) {
		return 0;
	}

	return ways(i, j - 1) + ways(i - 1, j);
}

int main() {

	int n, m;
	cin >> n >> m;

	cout << ways(n, m) << endl;

	return 0;
}
















