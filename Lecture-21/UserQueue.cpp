// UserQueue.cpp
#include <iostream>
using namespace std;
class node {
public:
	int data;
	node* next;
	node(int d): data(d), next(NULL) {}
};

class Queue {
	node* head, *tail;
	int cnt;
public:
	Queue() {
		head = tail = NULL;
		cnt = 0;
	}

	void push(int d) {
		if (head == NULL) {
			head = tail = new node(d);
		}
		else {
			node* n = new node(d);
			tail ->next = n;
			tail = n;
		}
		cnt ++;
	}

	void pop() {
		if (head == NULL) {
			return;
		}
		else if (head->next == NULL) {
			delete head;
			head = tail = NULL;
			cnt--;
		}
		else {
			node* n = head;
			head = head->next;
			delete n;
			cnt --;
		}
	}

	int front() {
		return head->data;
	}

	bool empty() {
		return head == NULL;
	}

	int size() {
		return cnt;
	}
};


int main() {

	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5); xn
	// cout << q.size() << endl;

	while (!q.empty()) {

		cout << q.front() << endl;

		q.pop();
	}

	// cout << q.size() << endl;


	return 0;
}
















