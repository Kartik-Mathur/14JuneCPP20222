// DerefenceOperator.cpp
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
	cout << "Derefer of a: " << *(&a) << endl;
	cout << "Derefer of aptr: " << *aptr << endl;

	// Dereferencing the garbage value

	int *x = NULL;
	if (*x == 1) {
		cout << "Take left turn" << endl;
	}
	else {
		cout << "Don't take Chalte jaao!" << endl;
	}



	return 0;
}
















