// RotateString.cpp
#include <iostream>
using namespace std;

int Length(char *a) {
	int ans = 0;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		ans++;
	}
	return ans;
}

void RotateString(char* a, int k) {
	int n = Length(a);
	k = k % n;
	// cout << a << endl;
	// 1. Shift all the characters by k position ahead
	int i = n - 1;
	while (i >= 0) {
		a[i + k] = a[i];

		i--;
	}
	// cout << a << endl;
	// 2. Shuru ke k indexes par last ke k characters ko lekar aana
	int j;
	j = 0;
	i = n;
	while (j < k) {
		a[j] = a[i];
		i++;
		j++;
	}
	// cout << a << endl;
	// 3. Add null at the length of string
	a[n] = '\0';
	// cout << a << endl;
}

int main() {

	char a[100] = "Coding";

	int k = 500;
	// cin >> k;
	cout << "Before rotation: " << a << endl;
	RotateString(a, k);
	cout << "After rotation: " << a << endl;

	return 0;
}
















