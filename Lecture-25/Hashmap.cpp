#include <iostream>
using namespace std;

class node {
public:
	string key;
	int value;
	node* next;
	node() {}
	node(string s, int v) {
		key = s;
		value = v;
	}
};

//////////////////////////////////////////////////////////////////////////////////////////
class hashmap {
	int hashFunction(string key) {
		int ans = 0;
		int mul = 1;
		for (int i = 0; key[i] != '\0' ; ++i)
		{
			ans += ( (key[i] % ts) * (mul % ts) ) % ts;
			mul = ( (mul % ts) * (37 % ts) ) % ts;
		}
		return ans % ts;
	}

	void rehash() {
		node ** olda = a;
		int oldts = ts;
		a = new node*[2 * ts];
		ts *= 2;
		cs = 0;
		for (int i = 0; i < ts; ++i)
		{
			a[i] = NULL;
		}

		for (int i = 0; i < oldts; ++i)
		{
			node* h = olda[i];
			while (h != NULL) {
				insert(h->key, h->value);
				h = h->next;
			}
		}
		delete []olda;
	}
public:
	node** a;
	int ts;
	int cs; // current size of the table(current kitni nodes insert kari)

	hashmap(int s = 7) {
		a = new node*[s];
		ts = s;
		cs = 0;
		for (int i = 0; i < s; ++i)
		{
			a[i] = NULL;
		}
	}

	void insert(string key, int value) {
		node* n = new node(key, value);

		int hash_indx = hashFunction(key);
		n->next = a[hash_indx];
		a[hash_indx] = n;
		cs++;
		float load_factor = cs / (ts * 1.0);
		if (load_factor > 0.6) {
			rehash();
		}
	}

	void print() {
		for (int i = 0; i < ts; ++i)
		{
			cout << i << "-->";
			node* h = a[i];
			while (h != NULL) {
				cout << "(" << h->key << ", " << h->value << ") ";
				h = h->next;
			}
			cout << endl;
		}
	}

	node* search(string key) {
		int hash_indx = hashFunction(key);
		node* h = a[hash_indx];

		while (h) {
			if (h->key == key) {
				return h;
			}
			h = h->next;
		}
		return NULL;
	}

	int& operator[](string key) {
		node* x = search(key);
		if (!x) {
			int garbage;
			insert(key, garbage);
			x = search(key);
			return x->value;
		}
		else {
			return x->value;
		}
	}

	void delete(string key) {
		node*x = search(key);
		if (!x) return;

		// int hash_indx = hashFunction(key);

	}

	void update(string key, int value) {
		node*x = search(key);
		if (!x) return;
		x->value = value;
	}

};
//////////////////////////////////////////////////////////////////////////////////////////


int main() {

	hashmap h;
	h.insert("Apple", 120);
	h.insert("Mango", 100);
	h.insert("Kiwi", 50);
	h.insert("Pineapple", 120);
	h["Banana"] = 20;
	h["Orange"] = 80;
	h["Orange"] = 90;
	cout << h["Orange"] << endl;
	// h.insert("Banana", 20);
	// h.insert("Orange", 80);

	h.print();

	return 0;
}
















