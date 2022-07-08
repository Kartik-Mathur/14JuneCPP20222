// StringToInt.cpp
#include <iostream>
using namespace std;

int StringToInt(char *a, int n) {
	// base case
	if (n == 0) {
		return 0;
	}
	// recursive case
	return StringToInt(a, n - 1) * 10 + (a[n - 1] - '0');

	// int ld = a[n - 1] - '0';
	// return StringToInt(a, n - 1) * 10 + ld;
}

int main() {

	char a[100] = "1123";
	int n = strlen(a);
	int ans = StringToInt(a, n);
	cout << ans << endl;
	cout << ans + 10 << endl;

	return 0;
}
















