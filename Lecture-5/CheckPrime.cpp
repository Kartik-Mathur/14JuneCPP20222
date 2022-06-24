// CheckPrime.cpp
#include <iostream>
using namespace std;

bool CheckPrime(int n) {
	for (int i = 2; i <= n - 1; ++i)
	{
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

void printAllPrimes(int n) {
	for (int i = 2; i <= n; ++i)
	{
		bool ans = CheckPrime(i);
		if (ans == true) {
			cout << i << " ";
		}
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	printAllPrimes(n);

	// bool ans = CheckPrime(n);
	// if (ans == true) {
	// 	cout << "Prime Hai" << endl;
	// }
	// else {
	// 	cout << "Prime Nhi hai" << endl;
	// }

	return 0;
}
















