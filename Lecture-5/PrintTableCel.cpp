// PrintTableCel.cpp
#include <iostream>
using namespace std;

void PrintTable(int init, int fval, int step) {
	int far, cel;
	far = init;
	while (far <= fval) {
		cel = (5 / 9.0) * (far - 32);

		cout << far << " : " << cel << endl;

		far = far + step;
	}
}


int main() {

	int fval, init, step, far, cel;
	cin >> init >> fval >> step;

	PrintTable(init, fval, step);


	return 0;
}
















