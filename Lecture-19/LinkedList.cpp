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


//////////////////////////// SEARCH IN LL /////////////////////////////
node* searchIterativeLL(node* head, int key) {
	while (head != NULL) {
		if (head -> data == key) {
			return head;
		}
		head = head->next;
	}
	return NULL;
}

node* searchRec(node* head, int key) {
	// base case
	if (head == NULL) {
		return NULL;
	}

	// recursive case
	if (head->data == key) {
		return head;
	}
	return searchRec(head->next, key);
}

/////////////////////////// !SEARCH IN LL /////////////////////////////



/////////////////////////// REVERSE LL ////////////////////////////////
void reverseLL(node* &head, node* &tail) {
	node* cur, *prev, *n;
	cur = head;
	prev = NULL;
	while (cur) {
		n = cur->next;
		cur->next = prev;
		prev = cur;
		cur = n;
	}
	swap(head, tail);
}
////////////////////////// !REVERSE LL ////////////////////////////////



////////////////////////// FIND MID LL ////////////////////////////////
node* midLL(node* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	}

	node* slow, *fast;
	slow = head;
	fast = head->next;
	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;
	}
	return slow;
}
////////////////////////// !FIND MID LL ////////////////////////////////



///////////////////////////// PRINTING LL /////////////////////////////
void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}
//////////////////////////// !PRINTING LL /////////////////////////////


//////////////////////////// BUBBLE SORT /////////////////////////////
void bubbleSortLL(node* &head) {
	int len = lengthLL(head);
	for (int i = 0; i < len - 1; ++i)
	{
		node* c = head, *prev = NULL, *n;
		while (c and c->next) {
			n = c->next;
			if (c -> data > n->data) {
				// swapping hogi
				if (prev == NULL) { // head change hoga
					c->next = n->next;
					n->next = c;
					prev = head = n;
				}
				else { // head change nhi hoga
					prev->next = n;
					c->next = n->next;
					n->next = c;
					prev = n;
				}
			}
			else {
				// swapping nahi hogi
				prev = c;
				c = c->next;
			}
		}
	}
}
/////////////////////////// !BUBBLE SORT /////////////////////////////




/////////////////////////// MERGE SORTED LISTS ///////////////////////
node* mergeSortedLL(node* h1, node* h2) {
	// base case
	if (h1 == NULL) {
		return h2;
	}
	if (h2 == NULL) {
		return h1;
	}

	// recursive case
	node* nH;
	if (h1->data < h2->data) {
		nH = h1;
		nH->next = mergeSortedLL(h1->next, h2);
	}
	else {
		nH = h2;
		nH->next = mergeSortedLL(h1, h2->next);
	}
	return nH;
}
////////////////////////// !MERGE SORTED LISTS ///////////////////////



////////////////////////// MERGE SORT LL LISTS ///////////////////////
node* mergeSort(node* head) {
	// base case
	if (head == NULL || head->next == NULL) {
		return head;
	}
	// recursive case
	// 1. Divide
	node* m = midLL(head);
	node* a = head;
	node* b = m->next;
	m->next = NULL;

	// 2. Sort
	a = mergeSort(a);
	b = mergeSort(b);

	// 3. Merge
	node* nH = mergeSortedLL(a, b);
	return nH;
}
///////////////////////// !MERGE SORT LL LISTS ///////////////////////








int main() {

	node* head, *tail, *head1, *tail1;
	head1 = tail1 = head = tail = NULL;

	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 3);
	InsertAtEnd(head, tail, 2);
	InsertAtEnd(head, tail, 7);
	InsertAtEnd(head, tail, 5);
	InsertAtEnd(head, tail, 4);
	InsertAtEnd(head, tail, 6);

	// InsertAtEnd(head1, tail1, 2);
	// InsertAtEnd(head1, tail1, 4);
	// InsertAtEnd(head1, tail1, 7);
	// InsertAtEnd(head1, tail1, 9);
	// InsertAtEnd(head1, tail1, 10);

	printLL(head);
	head = mergeSort(head);
	// printLL(head1);
	// head = mergeSortedLL(head, head1);
	printLL(head);

	// InsertAtMid(head, tail, 3, 10);
	// deleteAtFront(head, tail);
	// deleteAtFront(head, tail);
	// deleteAtEnd(head, tail);
	// deleteAtEnd(head, tail);
	// deleteAtMid(head, tail, 4);

	// printLL(head);
	// reverseLL(head, tail);
	// printLL(head);
	// bubbleSortLL(head);
	// printLL(head);

	// node* m = midLL(head);
	// if (m == NULL) {
	// 	cout << "Mid is not present\n";
	// }
	// else {
	// 	cout << "Mid: " << m->data << endl;
	// }

	// cout << "Length of LL: " << lengthLL(head) << endl;

	/* Searching code:
	node* ans = searchIterativeLL(head, 4);
	if (ans == NULL) {
	cout << "Key not found\n";
	}
	else {
	cout << "Key found: " << ans->data << endl;
	}

	ans = searchRec(head, 5);
	if (ans == NULL) {
	cout << "Key not found\n";
	}
	else {
	cout << "Key found: " << ans->data << endl;
	}
	*/
	/* ReverseLL
	reverseLL(head, tail);
	printLL(head);
	*/



	return 0;
}
















