// MultipleReadStrings.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	cout << "Number: " << n << endl;
	// This is to ignore the whitespace that is given after
	// the integer n
	cin.get();

	char a[100];
	cin.getline(a, 100);

	cout << a << endl;

	// cin.getline(a, 100);

	// cout << a << endl;

	// cin.getline(a, 100);

	// cout << a << endl;

	return 0;
}
















