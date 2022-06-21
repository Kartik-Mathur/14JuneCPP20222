// BitwiseOperators.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	// cin >> n;
	n = 15;
	int cnt = 0;
	while (n > 0) {
		if ((n & 1) == 1) {
			cnt ++;
		}

		n = n >> 1;
	}

	cout << "Set Bits: " << cnt << endl;

	return 0;
}
















