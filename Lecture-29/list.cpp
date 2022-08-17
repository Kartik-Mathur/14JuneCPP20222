// list.cpp
#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> l; // doubly linked list
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_front(5);
	l.push_front(6);
	l.push_front(7);
	for (int data : l) {
		cout << data << "-->";
	}
	cout << "NULL\n";

	l.pop_front();
	l.pop_back();
	// for each loop, for each data(variable) that belongs to linked list l
	for (auto data : l) {
		cout << data << "-->";
	}
	cout << "NULL\n";

	// Using iterator
	for (list<int>::iterator it = l.begin() ; it != l.end() ; it++) {
		cout << *it << "-->";
	}
	cout << "NULL\n";

	int pos = 3;
	list<int>::iterator it;

	it = l.begin();
	for (int i = 0; i < 3; ++i)
	{
		it++;
	}

	l.insert(it, 40);
	for (auto data : l) {
		cout << data << "-->";
	}
	cout << "NULL\n";


	for (auto data : l) {
		cout << data << "-->";
	}
	cout << "NULL\n";

	// l.reverse(); // linkedlist ko reverse krne ka tareeka

	// for (list<int>::reverse_iterator it = l.rbegin() ; it != l.rend() ; it++) {
	// 	cout << *it << "-->";
	// }
	// cout << "NULL\n";



	return 0;
}
















