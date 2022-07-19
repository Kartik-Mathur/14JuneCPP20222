// 2DVectorAsArray.cpp
#include <iostream>
#include <vector>
using namespace std;

#define NFV(v,n,m) 	for (int i = 0; i < n; ++i)\
{\
	for (int j = 0; j < m; ++j)\
	{\
		cout << v[i][j] << " ";\
	}\
	cout << endl;\
}\
cout<<endl;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int> > v(n, vector<int>(m, 1));
	// vector<vector<int> > v(n, vector<int>(m));

	NFV(v, n, m);
	NFV(v, n, m);
	// for (int i = 0; i < n; ++i)
	// {
	// 	for (int j = 0; j < m; ++j)
	// 	{
	// 		cout << v[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }


	return 0;
}
















