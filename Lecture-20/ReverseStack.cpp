// ReverseStack.cpp
#include <iostream>
#include <stack>
using namespace std;

void pushBottom(stack<int> &s, int te) {
	// base case
	if (s.empty()) {
		s.push(te);
		return;
	}
	// recursive case
	int top = s.top();
	s.pop();
	pushBottom(s, te);
	s.push(top);
}

void ReverseStack(stack<int> &s) {
	// base case
	if (s.empty()) {
		return;
	}
	// recursive case
	int te = s.top();
	s.pop();
	ReverseStack(s);
	pushBottom(s, te);
}


void printStack(stack<int> s) {
	while (!s.empty()) {
		cout << s.top() << " ";

		s.pop();
	}
	cout << endl;
}

int main() {

	stack<int> s;

	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	printStack(s);
	ReverseStack(s);
	printStack(s);


	return 0;
}

















































