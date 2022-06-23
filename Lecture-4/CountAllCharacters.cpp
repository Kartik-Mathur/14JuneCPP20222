// CountAllCharacters.cpp
#include <iostream>
using namespace std;

int main() {

	char ch;
	int alphabets = 0, digits = 0, spaces = 0, others = 0;

	ch = cin.get();
	while (ch != '$') {
		if ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' and ch <= 'z') ) {
			alphabets ++;
		}
		else if (ch >= '0' and ch <= '9') {
			digits++;
		}
		else if (ch == ' ' || ch == '\t' || ch == '\n') {
			spaces++;
		}
		else {
			others++;
		}
		ch = cin.get();
	}

	cout << "Alphabets: " << alphabets << endl;
	cout << "Digits: " << digits << endl;
	cout << "Spaces: " << spaces << endl;
	cout << "Other: " << others << endl;

	return 0;
}
















