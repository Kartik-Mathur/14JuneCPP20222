// UserInputVector.cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {

	int n = 5;
	// cin >> n;

	vector<int> v(n); // ek vector bana raha hai of n buckets/capacity
	// vector<int> v(n, 20); Yaha par n buckets ke andar 20 aa jaega

	// Never use vector push_back function, when we create vector like above👆
	// v.push_back(10);
	// cout << v.size() << endl;
	// cout << v.capacity() << endl;


	// for (int i = 0; i < n; ++i)
	// {
	// 	cin >> v[i];
	// }

	for (int i = 0; i < n; ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;



	return 0;
}
















