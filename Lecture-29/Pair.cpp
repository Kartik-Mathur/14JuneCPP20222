// Pair.cpp
#include <iostream>
using namespace std;

// cout krne ke liye
ostream &operator<<(ostream& os, pair<int, int> &p) {
	cout << p.first << ", " << p.second;
	return os;
}

// cin karne ke liye hai
istream &operator>>(istream& is, pair<int, int> &p) {
	cin >> p.first >> p.second;
	return is;
}



int main() {

	pair<int, int> p; //{first,second}
	p.first = 10;
	p.second = 20;
	cin >> p;
	cout << p << endl;
	// cout << p.first << endl;
	// cout << p.second << endl;

	// Initialization
	pair<char, int> p1('A', 100);
	cout << p1.first << endl;
	cout << p1.second << endl;

	pair<char, float> p2 = {'T', 10.11};
	cout << p2.first << endl;
	cout << p2.second << endl;

	pair<char, float> p3({'A', 100.11});
	cout << p3.first << endl;
	cout << p3.second << endl;


	// to store three things using pair
	pair<int, pair<int, int> > angles;
	// {angles.first, angles.second}





	return 0;
}
















