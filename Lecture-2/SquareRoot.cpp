// SquareRoot.cpp
#include <iostream>
using namespace std;

int main() {

	int n, k;
	float i, inc;
	cin >> n;

	i = 0;
	inc = 1;
	k = 0;
	while (k <= 3) {

		while (i * i <= n) {
			i = i + inc;
		}
		i = i - inc;

		inc = inc / 10;
		k = k + 1;
	}



	cout << i << endl;

	return 0;
}
















