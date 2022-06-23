// GlobalScope.cpp
#include <iostream>
using namespace std;

int x = 100;

int main() {
	cout << x << endl;
	int x = -10;
	if (x < 0) {
		int x = 2222;
		x++;
		cout << (::x) << endl;
		x++;
	}

	// cout << x << endl;
	::x = ::x + 100;
	cout << (::x) << endl;


	return 0;
}
















