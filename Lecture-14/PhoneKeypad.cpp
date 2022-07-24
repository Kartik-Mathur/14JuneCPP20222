// PhoneKeypad.cpp
#include <iostream>
using namespace std;

char keys[][5] = {
	"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"
};

void PhoneKeypad(char *in, char*out, int i, int k) {
	// base case
	if (in[i] == '\0') {
		out[k] = '\0';
		cout << out << endl;
		return;
	}
	// recursive case
	int d = in[i] - '0';
	for (int j = 0; keys[d][j] != '\0' ; ++j)
	{
		out[k] = keys[d][j];
		PhoneKeypad(in, out, i + 1, k + 1);
	}
}

int main() {
	char in[100], out[100];
	cin >> in;
	PhoneKeypad(in, out, 0, 0);

	return 0;
}
















