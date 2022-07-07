// IntToString.cpp
#include <iostream>
using namespace std;

char a[][10] = {
	"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

void IntToString(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	int ld = n % 10;
	cout << a[ld] << " ";
	IntToString(n / 10);
}

void IntToString1(int n) {
	// base case
	if (n == 0) {
		return;
	}

	// recursive case
	int ld = n % 10;
	IntToString1(n / 10);
	cout << a[ld] << " ";
}

int main() {

	int n = 2048;
	IntToString1(n);

	cout << endl;



	return 0;
}
















