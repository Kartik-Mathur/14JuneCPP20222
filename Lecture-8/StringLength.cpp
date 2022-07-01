// StringLength.cpp
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

int main() {

	char a[100];
	cin.getline(a, 100);

	int ans = Length(a);

	cout << "Length: " << ans << endl;


	return 0;
}
















