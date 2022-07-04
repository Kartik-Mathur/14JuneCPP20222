// CheckPermutation.cpp
#include <iostream>
using namespace std;

void printArray(int *freq) {
	for (int i = 0; i < 26; ++i)
	{
		cout << freq[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < 26; ++i)
	{
		char ch = 'a' + i;
		cout << ch << " ";
	} cout << endl;
}

bool CheckPermutation(char *a, char *b) {
	int freq[26] = {0};
	int i = 0;
	while (a[i] != '\0') {
		char ch = a[i];
		int indx = ch - 'a';
		freq[indx] ++;

		i++;
	}
	printArray(freq);
	i = 0;
	while (b[i] != '\0') {
		char ch = b[i];
		int indx = ch - 'a';
		freq[indx] --;

		i++;
	}
	printArray(freq);
	// check that every bucket in freq array is zero
	for (int i = 0; i < 26; ++i)
	{
		if (freq[i] != 0) {
			return false;
		}
	}
	return true;
}


int main() {

	char a[] = "abecadzzy";
	char b[] = "adczzyabz";
	bool ans = CheckPermutation(a, b);

	if (ans == true) {
		cout << "Permutation Hai" << endl;
	}
	else {
		cout << "Not a Permutation" << endl;
	}



	return 0;
}
















