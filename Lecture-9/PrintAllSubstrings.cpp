// PrintAllSubstrings.cpp
#include <iostream>
using namespace std;

int main() {

	char a[] = "abcd";

	int s = 0;
	while (a[s] != '\0') {
		int e = s;
		while (a[e] != '\0') {
			for (int k = s; k <= e; ++k)
			{
				cout << a[k];
			}
			cout << endl;
			e++;
		}
		s++;
	}


	return 0;
}
















