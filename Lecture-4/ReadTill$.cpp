// ReadTill$.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;
	int count = 0;
	ch = cin.get();// Initialization

	while (ch != '$') { // Condition check
		count++;
		ch = cin.get(); // Updation
	}
	cout << "Total Characters: " << count << endl;

	/// will not read white space characters ////////
	// char ch;
	// cin >> ch;

	// int count = 0;
	// cin >> ch;// Initialization

	// while (ch != '$') { // Condition check

	// 	count++;

	// 	cin >> ch; // Updation
	// }
	// cout << "Total Characters: " << count << endl;



	return 0;
}
















