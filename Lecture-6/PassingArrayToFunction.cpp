// PassingArrayToFunction.cpp
#include <iostream>
using namespace std;

// Pass karte huye, array ka size mention krna ya nhi krna is optional
// void printArray(int a[100], int n) {
void printArray(int a[], int n) {
	cout << "Printing via function: ";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

}

void updateArray(int a[], int n) {
	for (int i = 0; i < n; ++i)
	{
		a[i] ++;
	}
}

int main() {

	int a[100] = {1, 2, 3, 4, 5};
	int n = 5;

	printArray(a, n);
	updateArray(a, n);
	printArray(a, n);

	return 0;
}
















