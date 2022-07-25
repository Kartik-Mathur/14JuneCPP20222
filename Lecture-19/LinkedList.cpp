// LinkedList.cpp
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


//////////////////////////// Length LL /////////////////////////////
int lengthLL(node* head) {
	int cnt = 0;
	while (head != NULL) {
		cnt++;
		head = head->next;
	}
	return cnt;
}
/////////////////////////// !Length LL /////////////////////////////


///////////////////////////// INSERTION IN LL /////////////////////////////
void InsertAtFront(node* &head, node* &tail, int data) {
	node* n = new node(data);
	if (head == NULL) {
		head = tail = n;
	}
	else {
		n->next = head;
		head = n;
	}
}

void InsertAtEnd(node* &head, node* &tail, int data) {
	node* n = new node(data);
	if (head == NULL) {
		head = tail = n;
	}
	else {
		tail->next = n;
		tail = n;
	}
}

void InsertAtMid(node* &head, node* &tail, int pos, int data) {
	int len = lengthLL(head);
	if (pos >= len) { // this means insert at end
		InsertAtEnd(head, tail, data);
		return;
	}
	if (pos == 0) { // this means insert at front
		InsertAtFront(head, tail, data);
		return;
	}
	// Insert at middle
	node* t = head;
	node* n = new node(data);
	for (int i = 1; i <= pos - 1; ++i)
	{
		t = t->next;
	}

	n->next = t->next;
	t->next = n;
}
//////////////////////////// !INSERTION IN LL /////////////////////////////

///////////////////////////// DELETION IN LL /////////////////////////////
void deleteAtFront(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		head = head->next;
		delete t;
	}
}

void deleteAtEnd(node* &head, node* &tail) {
	if (head == NULL) {
		return;
	}
	else if (head ->next == NULL) {
		delete head;
		head = tail = NULL;
	}
	else {
		node* t = head;
		while (t->next != tail) {
			t = t->next;
		}
		delete tail;
		tail = t;
		tail->next = NULL;
	}
}

void deleteAtMid(node* &head, node* &tail, int pos) {
	int len = lengthLL(head);
	if (pos == 0) {
		deleteAtFront(head, tail);
	}
	else if (pos >= len - 1) {
		deleteAtEnd(head, tail);
	}
	else {
		node* t = head;
		for (int i = 0; i < pos - 1; ++i)
		{
			t = t->next;
		}
		node* n = t->next;
		t->next = n->next;
		delete n;
	}
}
//////////////////////////// !DELETION IN LL /////////////////////////////



///////////////////////////// PRINTING LL /////////////////////////////
void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}
//////////////////////////// !PRINTING LL /////////////////////////////

int main() {

	node* head, *tail;
	head = tail = NULL;

	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 2);
	InsertAtEnd(head, tail, 3);
	InsertAtEnd(head, tail, 4);
	InsertAtEnd(head, tail, 5);

	printLL(head);
	// InsertAtMid(head, tail, 3, 10);
	// deleteAtFront(head, tail);
	// deleteAtFront(head, tail);
	// deleteAtEnd(head, tail);
	// deleteAtEnd(head, tail);
	deleteAtMid(head, tail, 4);
	printLL(head);

	// cout << "Length of LL: " << lengthLL(head) << endl;

	return 0;
}
















