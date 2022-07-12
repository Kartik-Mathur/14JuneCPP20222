// Subsequences.cpp
#include <iostream>
using namespace std;

void Subsequences(char*in, char*out, int i, int j) {
	// base case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return ;
	}

	// recursive case
	// 1. ith character ko ignore krna hai
	Subsequences(in, out, i + 1, j);
	// 2. ith character ko ignore nhi krna
	out[j] = in[i];
	Subsequences(in, out, i + 1, j + 1);

}

int main() {

	char ip[] = "abc", out[100];

	Subsequences(ip, out, 0, 0);



	return 0;
}
















