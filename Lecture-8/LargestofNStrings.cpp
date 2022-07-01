// LargestofNStrings.cpp
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

void Update(char *largest, char *a) {
	int len_a = Length(a);
	for (int i = 0; i <= len_a; ++i)
	{
		largest[i] = a[i];
	}
}

int main() {
	int n;
	cin >> n;
	cin.get();
	char a[100], largest[100];
	int largest_len = 0;

	for (int i = 0; i < n; ++i)
	{
		cin.getline(a, 100);
		int len_a = Length(a);
		if (len_a > largest_len) {
			Update(largest, a);
			largest_len = len_a;
		}
	}
	cout << largest << endl;



	return 0;
}
















