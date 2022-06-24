// SumFunction.cpp
#include <iostream>
using namespace std;

// void PrintSum(int a, int b) {
// 	int sum = a + b;
// 	cout << sum << endl;
// }

// Forward Declaration
// int Sum(int a, int b);
int Sum(int, int);

int main() {
	int a, b;
	cin >> a >> b;

	int ans = Sum(a, b);

	if (ans % 2 == 0) {
		cout << "Sum is even" << endl;
	}
	else {
		cout << "Sum is odd" << endl;
	}
	// PrintSum(a, b);

	return 0;
}

int Sum(int a, int b) {
	int sum = a + b;

	return sum;
}




