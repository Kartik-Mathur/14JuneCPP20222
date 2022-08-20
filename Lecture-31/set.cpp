#include <iostream>
#include <set>
using namespace std;

int main() {

	set<pair<int, char> > s;
	s.insert({1, 'A'});
	s.insert({20, 'B'});
	s.insert({2, 'Z'});
	s.insert({2, 'Z'});
	s.insert({5, 'C'});
	s.insert({4, 'D'});
	s.insert({2, 'E'});
	s.insert({3, 'F'});

	auto f = s.find({2, 'Z'});
	if (f != s.end()) {
		cout << "Present hai\n";
	}
	else {
		cout << "Present nhi hai\n";
	}

	while (!s.empty()) {
		auto f = s.begin();

		cout << (*f).first << ", " << (*f).second << endl;
		s.erase(f);
	}



	// set<int> s;

	// s.insert(1);
	// s.insert(5);
	// s.insert(3);
	// s.insert(4);
	// s.insert(2);
	// s.insert(2);
	// s.insert(2);
	// s.insert(2);

	// auto f = s.find(4);
	// if (f != s.end()) {
	// 	s.erase(f);
	// 	s.insert(40);
	// }
	// else {
	// 	s.insert(40);
	// }

	// while (!s.empty()) {
	// 	auto f = s.begin();

	// 	cout << *f << endl;
	// 	s.erase(s.begin());
	// }

	// for (auto n : s) {
	// 	cout << n << endl;
	// }

	return 0;
}

















