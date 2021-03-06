// ElephantWays.cpp
#include <iostream>
using namespace std;

int ElephantWays(int i, int j) {
	// base case
	if (i == 0 and j == 0) {
		return 1;
	}
	// recursive case
	int ans = 0;
	for (int k = 0; k < i; ++k)
	{
		ans += ElephantWays(k, j);
	}

	for (int k = 0; k < j; ++k)
	{
		ans += ElephantWays(i, k);
	}
	return ans;
}


int main() {

	cout << ElephantWays(3, 3) << endl;

	return 0;
}
















