// BST.cpp
#include <iostream>
#include <queue>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node(int d): data(d) {
		left = right = NULL;
	}
};

node* InsertInBST(node* root, int d) {
	if (root == NULL) {
		root = new node(d);
		return root;
	}
	if (root->data >= d) {
		root->left = InsertInBST(root->left, d);
	}
	else {
		root->right = InsertInBST(root->right, d);
	}
	return root;
}

node* createBST() {
	node* root = NULL;
	int d;
	cin >> d;

	if (d == -1) return root;

	while (d != -1) {
		root = InsertInBST(root, d);

		cin >> d;
	}
	return root;
}


void preorder(node* root) {
	// base case
	if (!root) {
		return;
	}
	// recursive case
	cout << root->data << " ";
	preorder(root->left);
	preorder(root->right);
}


void inorder(node* root) {
	// base case
	if (!root) {
		return;
	}
	// recursive case
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

void postorder(node* root) {
	// base case
	if (!root) {
		return;
	}
	// recursive case
	postorder(root->left);
	postorder(root->right);
	cout << root->data << " ";
}

class LinkedList {
public:
	node* head, *tail;
};

LinkedList BSTtoLL(node* root) {
	LinkedList l;
	// base case
	if (!root) {
		l.head = l.tail = NULL;
		return l;
	}

	// recursive case
	if (!root->left and !root->right) {
		l.head = l.tail = root;
		return l;
	}
	else if (!root->left and root->right) {
		LinkedList rightLL = BSTtoLL(root->right);
		root->right = rightLL.head;
		l.head = root;
		l.tail = rightLL.tail;
		return l;
	}
	else if (root->left and !root->right) {
		LinkedList leftLL = BSTtoLL(root->left);
		leftLL.tail->right = root;
		l.head = leftLL.head;
		l.tail = root;
		return l;
	}
	else {
		LinkedList leftLL = BSTtoLL(root->left);
		LinkedList rightLL = BSTtoLL(root->right);
		leftLL.tail->right = root;
		root->right = rightLL.head;
		l.head = leftLL.head;
		l.tail = rightLL.tail;
		return l;
	}
}

void printLL(node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->right;
	}
	cout << "NULL\n";
}


int main() {
	node* root = createBST();

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;

	LinkedList l = BSTtoLL(root);
	printLL(l.head);



	return 0;
}
















