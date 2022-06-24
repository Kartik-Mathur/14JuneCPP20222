// SwitchCase.cpp
#include <iostream>
using namespace std;

int main() {
	// switch(character/integer){
	// 	case '':
	// }

	char ch ;
	cin >> ch;
	switch (ch) {
	case 'n':
	case 'N':
		cout << "North" << endl;
		break;
	case 'e':
	case 'E':
		cout << "East" << endl;
		break;
	case 'w':
	case 'W':
		cout << "West" << endl;
		break;
	case 's':
	case 'S':
		cout << "South" << endl;
		break;

	default:
		cout << "Incorrect character" << endl;
	}


	return 0;
}
















