// Pallindrome.cpp
#include <iostream>
using namespace std;
int Length(char *a) {
	int ans = 0;
	for (int i = 0; a[i] != '\0'; ++i)
	{
		ans ++;
	}

	return ans;
}

bool Pallindrome(char* a) {
	int i = 0, j = Length(a) - 1;
	while (i < j) {
		if (a[i] != a[j]) {
			return false;
		}
		i++;
		j--;
	}
	return true;
}


int main() {

	char a[] = "abcba";

	bool ans = Pallindrome(a);
	if (ans) {
		cout << "Pallindrome" << endl;
	}
	else {
		cout << "Not a Pallindrome" << endl;
	}

	return 0;
}
















