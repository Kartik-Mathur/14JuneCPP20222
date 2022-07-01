// MergeTwoArrays.cpp
#include <iostream>
using namespace std;

int Length(char *a) {
	int ans = 0;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		ans ++;
	}

	return ans;
}

void MergeTwoArrays(char *a, char *b) {

	int la = Length(a);
	int lb = Length(b);

	int i = la, j = 0;
	while (j <= lb) {
		a[i] = b[j];
		i++;
		j++;
	}
}

int main() {

	char a[100] = "Hello", b[100] = "World";
	cout << a << endl;
	cout << b << endl;
	MergeTwoArrays(a, b);
	cout << a << endl;
	cout << b << endl;

	return 0;
}
















