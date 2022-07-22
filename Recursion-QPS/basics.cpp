#include <iostream>
#include <set>
using namespace std;

int main() {

	set<string> s;

	s.insert("Hello");
	s.insert("World");
	auto it = s.find("Hello");
	if (it != s.end()) {
		cout << "Found" << endl;
	}

	return 0;
}
















