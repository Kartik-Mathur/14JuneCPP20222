// Break.cpp
#include <iostream>
using namespace std;

int main() {
	// Continue Statement Working

	int i = 1;
	while (i <= 5) {

		if (i == 3) {
			i++;
			continue;
		}
		cout << i << " ";
		i++;
	}

// Break Statement working //
	// int i = 1;
	// while (i <= 10) {
	// 	cout << i << " ";

	// 	if (i == 5) {
	// 		break;
	// 	}

	// 	i++;
	// }

	cout << endl;
	return 0;
}
















