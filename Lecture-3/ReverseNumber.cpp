// ReverseNumber.cpp
#include <iostream>
using namespace std;

int main() {

	int n, d, ans = 0;
	cin >> n;
	cout << n << endl;
	while (n > 0) {
		// work
		d = n % 10;
		ans = ans * 10 + d;

		n = n / 10;
	}

	cout << ans << endl;

	return 0;
}
















