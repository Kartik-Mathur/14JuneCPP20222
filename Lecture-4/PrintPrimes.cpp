// Solution: https://ide.codingblocks.com/s/666275
// Link: https://hack.codingblocks.com/app/contests/3240/77/problem
#include <iostream>
using namespace std;

int main() {

	int n = 20, flag;
	for (int no = 2; no <= n; ++no)
	{
		// cout << no << " ";
		// check karo no prime hai toh hi print krna
		// [2,no-1]
		flag = 0; // flag agar zero rakha aur no ko divide karke dekha
		// agar number [2,no-1] mei kisi se divide hua toh prime nhi hoga
		// ispar I will change the flag ki value
		for (int i = 2; i < no; ++i)
		{
			if (no % i == 0) {
				flag = 1;
			}
		}
		if (flag == 0) {
			cout << no << " ";
		}
	}

	cout << endl;
	return 0;
}