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

void levelOrderTraversal(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* n = q.front();
		q.pop();

		if (n == NULL) {
			cout << endl;
			if (!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << n->data << " ";
			if (n->left != NULL) {
				q.push(n->left);
			}
			if (n->right != NULL) {
				q.push(n->right);
			}
		}
	}
}

void printRange(node* root, int k1, int k2) {
	if (!root) {
		return;
	}
	if (root->data >= k1 and root->data <= k2) {
		cout << root->data << " ";
	}
	printRange(root->left, k1, k2);
	printRange(root->right, k1, k2);
}

node* searchBST(node* root, int key) {
	if (!root) {
		return NULL;
	}

	if (root->data == key) {
		return root;
	}
	else if (root->data > key) {
		return searchBST(root->left, key);
	}
	else {
		return searchBST(root->right, key);
	}
}

bool isBST(node* root, int mi = INT_MIN, int mx = INT_MAX) {
	// base case
	if (!root) {
		return true;
	}

	// recursive case
	if (root->data >= mi and root->data <= mx
	        and isBST(root->left, mi, root->data)
	        and isBST(root->right, root->data, mx)
	   ) {
		return true;
	}
	return false;
}

class Pair {
public:
	bool balanced;
	int height;
};

Pair isBalanced(node* root) {
	Pair p;
	if (!root) {
		p.height = 0;
		p.balanced = true;
		return p;
	}

	Pair left = isBalanced(root->left);
	Pair right = isBalanced(root->right);

	p.height = max(left.height, right.height) + 1;
	if (abs(left.height - right.height) <= 1 and left.balanced and right.balanced) {
		p.balanced = true;
	}
	else {
		p.balanced = false;
	}
	return p;
}

int main() {
	// 8 3 10 1 6 14 4 7 13 -1
	node* root = createBST();

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	printRange(root, 6, 13);
	cout << endl;
	levelOrderTraversal(root);

	node* ans = searchBST(root, 100);
	if (!ans) {
		cout << "Not Found\n";
	}
	else {
		cout << "Found: " << ans->data << endl;
	}

	if (isBST(root)) {
		cout << "BST hai\n";
	}
	else {
		cout << "BST Nahi hai\n";
	}

	Pair x = isBalanced(root);
	if (x.balanced) {
		cout << "BST Balanced hai\n";
	}
	else {
		cout << "BST Balanced Nahi hai\n";
	}

	return 0;
}
















