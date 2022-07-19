// 2DVector.cpp
#include <iostream>
#include <vector>
using namespace std;
#define pb push_back

int main() {

	vector< vector<int> > v(5);

	v[0].pb(1);
	v[1].pb(2);
	v[1].pb(3);
	v[1].pb(4);
	v[1].pb(5);
	v[1].pb(6);
	v[3].pb(7);
	v[3].pb(8);

	for (int i = 0; i < v.size(); ++i)
	{
		cout << "Row " << i << ": ";
		for (int j = 0; j < v[i].size(); ++j)
		{
			cout << v[i][j] << " ";
		}
		cout << endl;
	}





	return 0;
}
















