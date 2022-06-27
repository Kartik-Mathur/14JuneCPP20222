// CallByValRef.cpp
#include <iostream>
using namespace std;

void updateCallByVal(int x) {
	x = x + 1;
}

void updateCallByRef(int &x) {
	x = x + 1;
}


int main() {

	int a = 1;

	cout << "Before Updation: " << a << endl;

	updateCallByRef(a);

	cout << "After Updation: " << a << endl;

	return 0;
}
















