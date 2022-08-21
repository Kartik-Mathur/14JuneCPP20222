// Trie.cpp
#include <iostream>
#include <unordered_map>
#include <vector>
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

	void findAllWords(node* temp, string &x, vector<string> &ans) {
		if (temp->isTerminal == true) {
			ans.push_back(x);
		}

		// recursive case
		for (auto p : temp->h) {
			x.push_back(p.first);
			findAllWords(p.second, x, ans);
			x.pop_back();
		}
	}

	void autoFill(char *initial) {
		node* temp = root;
		for (int i = 0; initial[i]; ++i)
		{
			char ch = initial[i];
			if (temp->h.count(ch) == 1) {
				temp = temp->h[ch];
			}
			else {
				return;
			}
		}

		string x(initial);
		vector<string> ans;
		findAllWords(temp, x, ans);

		for (auto w : ans) {
			cout << w << endl;
		}
	}
};

int main() {

	Trie t;
	t.addWord("Hello");
	t.addWord("Heman");
	t.addWord("Hell");
	t.addWord("Heart");
	t.addWord("Hero");

	t.addWord("Code");
	t.addWord("Coder");
	t.addWord("Coders");
	char initial[] = "Hel";

	t.autoFill(initial);
	// char word[100] = "code";
	// if (t.searchWord(word)) {
	// 	cout << "Present hai\n";
	// }
	// else {
	// 	cout << "Present nahi hai\n";
	// }



	return 0;
}
















