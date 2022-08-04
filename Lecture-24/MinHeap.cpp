// MinHeap.cpp
#include <iostream>
#include <vector>
using namespace std;

class Minheap {
	void heapfiy(int indx) {
		int li = 2 * indx;
		int ri = li + 1;
		int mi = indx;

		if (li < v.size() and v[li] < v[mi]) {
			mi = li;
		}
		if (ri < v.size() and v[ri] < v[mi]) {
			mi = ri;
		}
		if (mi != indx) {
			swap(v[mi], v[indx]);
			heapfiy(mi);
		}
	}
	vector<int> v;

public:
	Minheap() {
		v.push_back(-1); // 0th index ko khaali chhodna h
	}

	void push(int d) {
		v.push_back(d);
		int c = v.size() - 1;
		int p = c / 2;

		while (p > 0 and v[p] > v[c]) {
			swap(v[p], v[c]);
			c = p;
			p /= 2;
		}
	}

	void pop() {
		swap(v[1], v[v.size() - 1]);
		v.pop_back();
		heapfiy(1);
	}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main() {

	Minheap h;

	h.push(1);
	h.push(4);
	h.push(3);
	h.push(2);
	h.push(6);
	h.push(5);

	while (!h.empty()) {
		cout << h.top() << endl;
		h.pop();
	}


	return 0;
}
















