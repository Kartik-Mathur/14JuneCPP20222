// CallByReference.cpp
#include <iostream>
using namespace std;

void update(int *y) {
	*y = *y + 1;
}

int main() {

	int a = 1;
	int *x = &a;

	cout << "Before Update: " << a << endl;
	update(x);
	cout << "After Update: " << a << endl;

	return 0;
}
















