#include <iostream>
using namespace std;

int main() {

	int n, no;
	cin >> n;
	int ans = 0;

	for (int i = 0; i < n; ++i)
	{
		// read the number and take xor of it in the ans
		cin >> no;
		ans = ans ^ no;
	}
	cout << "Unique number: " << ans << endl;

	return 0;
}
















