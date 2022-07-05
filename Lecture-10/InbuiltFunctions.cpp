// InbuiltFunctions.cpp: On character Array
#include <iostream>
#include <cstring>
using namespace std;

int main() {

	// char a[100] = "Code";
	char a[100] = "Coding";
	char b[100] = "Blocks";

	cout << "Length: " << strlen(a) << endl;
	cout << "Total buckets count: " << sizeof(a) << endl;

	// Appends the string b into string a
	strcat(a, b);

	cout << a << endl;

	// Compare two strings
	char x[] = "xyz";
	char y[] = "abc";
	// if (x < y), ans is negative
	// if (x == y), ans is 0
	// if (x > y), ans is +ve

	int ans = strcmp(x, y);
	cout << ans << endl;

	// strcpy
	char m[1000] = "Coding";
	char n[] = "Hello World!";

	cout << "string before: " << m << endl;
	strcpy(m, n);
	cout << "string after: " << m << endl;


	return 0;
}
















