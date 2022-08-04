// Heap - Fruits.cpp
#include <iostream>
#include <queue>
using namespace std;

class Fruits {
public:
	string name;
	int price;
	float weight;
	int sweetness;
	Fruits() {}

	Fruits(string n, int p, float w, int s) {
		name = n;
		price = p;
		weight = w;
		sweetness = s;
	}
};

class myClass {
public:
	// Functor
	bool operator()(Fruits a, Fruits b) {
		return a.price > b.price;
	}

};

int main() {

	priority_queue<Fruits, vector<Fruits>, myClass> q;
	Fruits f("Mango", 100, 12, 80);
	Fruits f1("Apple", 90, 12, 80);
	Fruits f2("Kiwi", 60, 12, 80);
	Fruits f3("Guava", 120, 12, 80);
	Fruits f4("Pineapple", 150, 12, 80);
	q.push(f1);
	q.push(f2);
	q.push(f3);
	q.push(f4);
	q.push(f);

	while (!q.empty()) {
		Fruits x = q.top();
		cout << x.name << ", " << x.price  << endl;

		q.pop();
	}

	return 0;
}
















