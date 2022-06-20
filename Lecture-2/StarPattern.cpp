// StarPattern.cpp
#include <iostream>
using namespace std;

int main() {

	int n, i, row;
	cin >> n;

	row = 1;
	while (row <= n) {
		// Work likhna hai har row ke andar jo ho rha hai
		// generic
		i = 1;
		while (i <= row) {
			cout << "* ";

			i = i + 1;
		}

		cout << '\n';
		row = row + 1;
	}

	return 0;
}
















