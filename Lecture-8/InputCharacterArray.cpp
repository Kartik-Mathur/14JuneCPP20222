// InputCharacterArray.cpp
#include <iostream>
using namespace std;

int main() {

	char a[100];

	// cin >> a;
	// cin.getline(array_name,no_of_chars,delimiter);
	// delimiter: will tell you at which character you need to
	// stop taking the input
	cin.getline(a, 100);

	// cout << a << endl;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}
















