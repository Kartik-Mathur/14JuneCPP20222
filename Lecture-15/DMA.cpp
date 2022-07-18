// DMA.cpp
#include <iostream>
using namespace std;

int main() {

	int *a = new int;
	*a = 10;
	cout << *a << endl;


	float *f = new float;
	*f = 10.12;
	cout << *f << endl;

	delete f;
	delete a;
	a = NULL;
	f = NULL;

	int n;
	cin >> n;
	int *arr = new int[n];

	for (int i = 0; i < n; ++i)
	{
		arr[i] = i + 1;
	}

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;
	arr = NULL;

	for (int i = 0; i < n; ++i)
	{
		cout << arr[i];
	}


	return 0;
}
















