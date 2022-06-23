#include <iostream>
using namespace std;

int main() {

	int n, row, stars;
	cin >> n;

	for (row = 1; row <= n; ++row)
	{

		for (stars = 1; stars <= row; ++stars)
		{
			cout << "* ";
		}

		// 2. Print ' '
		cout << ' ';

		// 3. n-row+1 times stars
		for (stars = 1; stars <= n - row + 1; ++stars)
		{
			cout << "* ";
		}

		// 4. Print ' '
		cout << " ";

		// 5 .n-row+1 times stars
		for (stars = 1; stars <= n - row + 1; ++stars)
		{
			cout << "* ";
		}

		// 6. Print ' '
		cout << " ";

		// 7. Print row times stars
		for (stars = 1; stars <= row; ++stars)
		{
			cout << "* ";
		}


		cout << endl;
	}

	return 0;
}
















