// Pointers.cpp
#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int *aptr = &a;

	float f = 10.11;
	float*fptr;
	fptr = &f;

	char ch = 'A';
	char *chptr = &ch;

	cout << "Address of a: " << &a << endl;
	cout << "Address of aptr: " << aptr << endl;

	cout << "Address of f: " << &f << endl;
	cout << "Address of fptr: " << fptr << endl;

	cout << "Address of ch: " << (int*)&ch << endl;
	cout << "Address of chptr: " << (float*)chptr << endl;



	return 0;
}
















