// UserStringInput.cpp
#include <iostream>
using namespace std;

// Readline basic code, without considering any constraint
void readLine(char* a) {
	char ch;
	int i = 0;

	ch = cin.get();
	while (ch != '\n') {
		a[i] = ch;
		i++;
		ch = cin.get();
	}
	a[i] = '\0';
}

// Including the size to read the character array
void readLine1(char* a, int s) {
	char ch;
	int i = 0;

	ch = cin.get();
	while (ch != '\n' and i < s - 1) {
		a[i] = ch;
		i++;
		ch = cin.get();
	}
	a[i] = '\0';
}

// Adding Delimiter
void readLine2(char* a, int s, char delimiter = '\n') {
	char ch;
	int i = 0;

	ch = cin.get();
	while (ch != delimiter and i < s - 1) {
		a[i] = ch;
		i++;
		ch = cin.get();
	}
	a[i] = '\0';
}

int main() {

	char a[100];
	// readLine(a);
	// readLine1(a, 10);
	readLine2(a, 100);
	cout << a << endl;


	return 0;
}
















