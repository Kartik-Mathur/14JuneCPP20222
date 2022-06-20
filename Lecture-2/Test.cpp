#include <iostream>
#include <climits> // header file for INT_MIN, INT_MAX
using namespace std;

int main() {

	int n, largest, no;
	cin >> n;

	largest = INT_MIN;
	int i = 1; // Initialization
	while (i <= n) { // Condition Check
		// Work
		cin >> no;
		if (no > largest) {
			largest = no;
		}

		i = i + 1; // Updation
	}

	cout << "Largest Number: " << largest << endl;

	return 0;
}
















