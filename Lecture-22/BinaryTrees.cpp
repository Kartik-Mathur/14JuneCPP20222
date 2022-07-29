// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node(int d): data(d), left(NULL), right(NULL) {}
};

node* createBT() {
	int data;
	cin >> data;
	if (data == -1) {
		return NULL;
	}

	node* root = new node(data);
	root->left = createBT();
	root->right = createBT();
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

int CountNodesBT(node* root) {
	// base case
	if (!root) {
		return 0;
	}
	// recursive case
	return CountNodesBT(root->left) + CountNodesBT(root->right) + 1;
}

int heightBT(node* root) {
	// base case
	if (!root) {
		return 0;
	}

	return max(heightBT(root->left), heightBT(root->right)) + 1;
}

int DiameterBT(node* root) {
	// base case
	if (!root) {
		return 0;
	}

	// recursive ase
	int op1 = heightBT(root->left) + heightBT(root->right);
	int op2 = DiameterBT(root->left);
	int op3 = DiameterBT(root->right);
	return max(op1, max(op2, op3));
}

class Pair {
public:
	int height;
	int diameter;
};

Pair fastDiameter(node* root) {
	Pair p;
	// base case
	if (!root) {
		p.height = p.diameter = 0;
		return p;
	}

	// recursive case
	Pair left = fastDiameter(root->left);
	Pair right = fastDiameter(root->right);

	// Bade tree ki height and diameter calculate karna hai
	p.height = max(left.height, right.height) + 1;

	// Diameter
	int op1 = left.height + right.height;
	int op2 = left.diameter;
	int op3 = right.diameter;
	p.diameter = max(op1, max(op2, op3));
	return p;
}

node* searchBT(node* root, int key) {
	// base case
	if (!root) {
		return NULL;
	}

	// recursive case
	if (root->data == key) {
		return root;
	}
	node* leftAns = searchBT(root->left, key);
	if (leftAns != NULL) {
		return leftAns;
	}
	node* rightAns = searchBT(root->right, key);
	return rightAns;
}

void mirror(node* root) {
	if (!root) {
		return;
	}

	swap(root->left, root->right);
	mirror(root->left);
	mirror(root->right);
}

int main() {
	node* root = NULL;

	root = createBT();

	preorder(root);
	cout << endl;
	inorder(root);
	cout << endl;
	postorder(root);
	cout << endl;
	cout << "Nodes Count: " << CountNodesBT(root) << endl;
	cout << "Height of Tree: " << heightBT(root) << endl;
	cout << "Diameter of Tree: " << DiameterBT(root) << endl;

	Pair ans = fastDiameter(root);
	cout << "Height of Tree: " << ans.height << endl;
	cout << "Diameter of Tree: " << ans.diameter << endl;

	node* x = searchBT(root, 40);
	if (x != NULL) {
		cout << "Key found: " << x->data << endl;
	}
	else {
		cout << "Key Not Found\n";
	}
	return 0;
}
















