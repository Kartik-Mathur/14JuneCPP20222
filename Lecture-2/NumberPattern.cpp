// NumberPattern.cpp
#include <iostream>
using namespace std;

int main() {
	int n, i, row, no;
	cin >> n;

	no = 1;
	row = 1;
	while (row <= n) {
		// Work likhna hai har row ke andar jo ho rha hai
		// generic
		i = 1;
		while (i <= row) {
			cout << no << " ";
			no = no + 1;

			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















