// Factorial.cpp
#include <iostream>
using namespace std;
// fact(n) = n*fact(n-1);

// Function calling itself is recursion
int fact(int n) {
	// base case
	if (n == 0) {
		return 1;
	}

	// recursive case
	int ChotaAns = fact(n - 1); // Dimaag nhi lagana, ki answer kaise aaega
	int BadaAns = n * ChotaAns;
	return BadaAns;
}

int fact(int n) {
	// base case
	if (n == 0) {
		return 1;
	}
	// recursive case
	return n * fact(n - 1);
}

int main() {
	int n;
	cin >> n;
	cout << fact(n) << endl;
	return 0;
}
















