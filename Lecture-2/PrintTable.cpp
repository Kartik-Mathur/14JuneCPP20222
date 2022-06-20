// PrintTable.cpp
#include <iostream>
using namespace std;

int main() {

	int fval, init, step, far, cel;
	cin >> init >> fval >> step;

	far = init;
	while (far <= fval) {
		cel = (5 / 9.0) * (far - 32);

		cout << far << " : " << cel << endl;

		far = far + step;
	}


	return 0;
}
















