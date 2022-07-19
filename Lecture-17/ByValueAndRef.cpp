// ByValueAndRef.cpp
#include <iostream>
#include <vector>
using namespace std;

void update(vector<int> a) {
	for (int i = 0; i < a.size(); ++i)
	{
		a[i] += 10;
	}
}

void print(vector<int> a) {
	for (int i = 0; i < a.size(); ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {

	vector<int> v({1, 2, 3, 4, 5});
	v.clear(); // Saare elements remove
	// cout << v.size() << endl;
	// cout << v.capacity() << endl;
	print(v);
	update(v);
	print(v);


	return 0;
}
















