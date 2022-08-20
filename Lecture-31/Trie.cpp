// Trie.cpp
#include <iostream>
#include <unordered_map>
using namespace std;

class node {
public:
	char ch;
	bool isTerminal;
	unordered_map<char, node*> h;
	node(char c) {
		ch = c;
		isTerminal = false;
	}
};

class Trie {
public:
	node* root;
	Trie() {
		root = new node('\0');
	}

	void addWord(char *word) {
		node* temp = root;
		for (int i = 0; word[i]; ++i)
		{
			char ch = word[i];
			if (temp->h.count(ch)) {
				temp = temp->h[ch];
			}
			else {
				node* n = new node(ch);
				temp->h[ch] = n;
				temp = n;
			}
		}
		temp->isTerminal = true;
	}

	bool searchWord(char *word) {
		node* temp = root;
		for (int i = 0; word[i]; ++i) {
			char ch = word[i];
			if (temp->h.count(ch) == 1) {
				temp = temp->h[ch];
			}
			else {
				return false;
			}
		}
		return temp->isTerminal;
	}
};

int main() {

	Trie t;
	t.addWord("Hello");
	t.addWord("Code");
	t.addWord("Coder");
	t.addWord("Coders");
	char word[100] = "code";
	if (t.searchWord(word)) {
		cout << "Present hai\n";
	}
	else {
		cout << "Present nahi hai\n";
	}


	return 0;
}
















