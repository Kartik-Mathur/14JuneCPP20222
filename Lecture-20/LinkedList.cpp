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
//////////////////////////// !INSERTION IN LL /////////////////////////////


///////////////////////////// PRINTING LL /////////////////////////////
void printLL(node* head) {
	while (head != NULL) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "NULL\n";
}
//////////////////////////// !PRINTING LL /////////////////////////////



/////////////////////////// BUILD CYCLE  /////////////////////////////
void buildCycle(node* head, node* tail) {
	tail->next = head->next->next;
}
/////////////////////////// !BUILD CYCLE  /////////////////////////////


////////////////////////// BREAK THE CYCLE /////////////////////////////
void breakCycle(node* head, node* fast = NULL) {
	if (fast == NULL) { // if fast is not present go and find it first
		fast = head;
		node *slow = head;
		while (fast and fast->next) {
			fast = fast->next->next;
			slow = slow->next;
			if (fast == slow) {
				break;
			}
		}
		if (fast != slow) { // fast != slow means cycle nhi hai vapis jaao yaha se
			return;
		}
	}
	node* slow = head;
	node* prev = head;
	while (prev->next != fast) {
		prev = prev->next;
	}

	while (fast != slow) {
		prev = fast;
		fast = fast->next;
		slow = slow->next;
	}
	prev->next = NULL;

}
///////////////////////// !BREAK THE CYCLE /////////////////////////////



/////////////////////////// CYCLE DETECTION /////////////////////////////
bool isCyclicLL(node* head) {
	node* fast = head, *slow = head;
	while (fast and fast->next) {
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow) {
			breakCycle(head, fast);
			return true;
		}
	}
	return false;
}
////////////////////////// !CYCLE DETECTION /////////////////////////////








int main() {

	node* head, *tail;
	head = tail = NULL;

	InsertAtEnd(head, tail, 1);
	InsertAtEnd(head, tail, 2);
	InsertAtEnd(head, tail, 3);
	InsertAtEnd(head, tail, 4);
	InsertAtEnd(head, tail, 5);
	InsertAtEnd(head, tail, 6);
	InsertAtEnd(head, tail, 7);
	InsertAtEnd(head, tail, 8);

	buildCycle(head, tail);

	if (isCyclicLL(head)) {
		cout << "Cycle is Present\n";
	}
	else {
		cout << "Cycle is not Present\n";
	}


	printLL(head);




	return 0;
}
















