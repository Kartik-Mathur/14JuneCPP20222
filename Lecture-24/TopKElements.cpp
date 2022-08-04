// TopKElements.cpp
#include <iostream>
#include <functional>
#include <queue>
using namespace std;

void printHeap(priority_queue<int, vector<int>, greater<int> > q) {
	while (!q.empty()) {
		cout << q.top() << " ";
		q.pop();
	}
}

int main() {

	priority_queue<int, vector<int>, greater<int> > q;
	int current_count = 0;
	int k = 3;
	while (true) {
		int no;
		cin >> no;

		if (no == -1) {
			// Print the heap
			printHeap(q);
		}
		else {
			if (current_count < k) {
				q.push(no);
				current_count++;
			}
			else {
				if (q.top() < no) {
					q.pop();
					q.push(no);
				}
			}
		}
	}


	return 0;
}
















