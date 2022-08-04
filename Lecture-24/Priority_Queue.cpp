// Priority_Queue.cpp
#include <iostream>
#include <queue>
#include <functional>
using namespace std;

// class myClass {
// public:
// 	// Functor
// 	bool operator()(int a, int b) {
// 		return a < b;
// 	}

// };

int main() {

	// priority_queue<int> h;
	priority_queue<int, vector<int>, myClass> h;
	// priority_queue<int, vector<int>, greater<int> > h;
	// priority_queue<int, vector<int>, less<int> > h;

	h.push(1);
	h.push(4);
	h.push(3);
	h.push(2);
	h.push(6);
	h.push(5);

	while (!h.empty()) {
		cout << h.top() << endl;
		h.pop();
	}

	return 0;
}
















