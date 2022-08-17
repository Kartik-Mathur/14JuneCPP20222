// Hashmap.cpp
#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main() {

	map<string, int> h;

	pair<string, int> p("Mango", 100);
	h.insert(p); // maps ke andar we insert pair

	h.insert({"Apple", 120});

	h.insert(make_pair("Pineapple", 60));


	string fruits[4] = {"Kiwi", "Banana", "Orange", "Mango"};
	int prices[] = {30, 55, 80, 150};

	for (int i = 0; i < 4; ++i)
	{
		h.insert({fruits[i], prices[i]});
	}


	// for (int i = 0; i < h.bucket_count(); ++i)
	// {
	// 	cout << i << "--> ";
	// 	for (auto it = h.begin(i) ; it != h.end(i) ; it++) {
	// 		// cout << "(" << (*it).first << ", " << (*it).second << ") ";
	// 		cout << "(" << (it)->first << ", " << (it)->second << ") ";
	// 	}
	// 	cout << endl;
	// }

	cout << "\nPrinting using for each loop: " << endl;
// ALTERNATIVE WAY TO PRINT HASHMAP
	for (auto p : h) {
		cout << p.first << ", " << p.second << "\n";
	}

	return 0;
}
















