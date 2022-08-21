// MaxXorPair.cpp
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;
	node() {
		left = right = NULL;
	}
};

class Trie {
public:
	node* root;
	Trie() {
		root = new node();
	}

	void insert(int n) {
		node* temp = root;
		for (int i = 31; i >= 0; --i)
		{
			int bit = (n & (1 << i)) ?  1 : 0;
			if (bit == 1) {
				if (!temp->right) {
					temp->right = new node();
				}
				temp = temp->right;
				/*
				if (temp->right) {
					temp = temp -> right;
				}
				else {
					temp->right = new node();
					temp = temp->right;
				}
				*/
			}
			else {
				if (!temp->left) {
					temp->left = new node();
				}
				temp = temp->left;
			}
		}
		temp->data = n;
	}

	int maxXorPairHelper(int n) {
		node* temp = root;
		for (int i = 31 ; i >= 0 ; i--) {
			int bit = (n & (1 << i)) ? 1 : 0;
			if (bit == 0) {
				if (temp->right) {
					temp = temp->right;
				}
				else {
					temp = temp->left;
				}
			}
			else {
				if (temp->left) {
					temp = temp->left;
				}
				else {
					temp = temp->right;
				}
			}
		}
		return temp->data ^ n;
	}

	int maxXorPair(int a[], int n) {
		int ans = INT_MIN;

		for (int i = 0; i < n; ++i)
		{
			insert(a[i]);
			int t = maxXorPairHelper(a[i]);
			ans = max(ans, t);
		}
		return ans;
	}
};

int main() {

	Trie t;

	int a[] = {1, 5, 3, 4, 10};
	int n = sizeof(a) / sizeof(int);

	cout << t.maxXorPair(a, n) << endl;

	return 0;
}
















