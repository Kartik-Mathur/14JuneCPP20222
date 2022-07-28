// CircularQueue.cpp
#include <iostream>
using namespace std;

class Queue {
public:
	int *a, n, s, f, e;
	Queue(int si = 5) {
		a = new int[si];
		s = 0;
		n = si;
		f = 0;
		e = n - 1;
	}

	void push(int d) {
		if (s < n) {
			e = (e + 1) % n;
			a[e] = d;
			s++;
		}
		else {
			cout << "Overflow\n";
		}
	}

	void pop() {
		if (s > 0) {
			f = (f + 1) % n;
			s--;
		}
		else {
			cout << "Underflow\n";
		}
	}

	bool empty() {
		return s == 0;
	}

	int size() {
		return s;
	}

	int front() {
		return a[f];
	}
};

int main() {
	Queue q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.push(6);
	// cout << q.size() << endl;

	while (!q.empty()) {

		cout << q.front() << endl;

		q.pop();
	}

	q.pop();
	return 0;
}
















