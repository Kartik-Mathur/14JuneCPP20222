// LinkedList - 1.cpp
#include <iostream>
using namespace std;

///////////////////////////// NODE /////////////////////////////
class node {
public:
	int data;
	node* next;
	node() {}
	node(int d): data(d), next(NULL) {}
};
///////////////////////////// !NODE /////////////////////////////

int main() {
	// 1. Creating nodes
	node a(1);
	node b(2);
	node c(3);

	// 2. Linking nodes
	a.next = &b;
	b.next = &c;

	// 3. Printing nodes
	cout << a.data << "-->";
	cout << (*(a.next)).data << "-->";
	cout << (*((*(a.next)).next)).data << "-->NULL\n";

	// 4. Printing nodes using pointer
	// 1st way, this we will use everytime
	node* head = &a;
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";

	// 2nd way, could be used as an alternative
	head = &a;
	while (head) {
		cout << (*head).data << "-->";
		head = (*head).next;
	}
	cout << "NULL\n";

	return 0;
}
















