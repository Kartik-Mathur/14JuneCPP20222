// BalancedParantheses.cpp
#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(char *a) {
	stack<char> s;

	for (int i = 0; a[i] != '\0'; ++i)
	{
		char ch = a[i];
		switch (ch) {
		case '(':
		case '[':
		case '{':
			s.push(ch);
			break;

		case ')':
			if (!s.empty() and s.top() == '(') {
				s.pop();
			}
			else {
				return false;
			}
			break;

		case ']':
			if (!s.empty() and s.top() == '[') {
				s.pop();
			}
			else {
				return false;
			}
			break;

		case '}':
			if (!s.empty() and s.top() == '{') {
				s.pop();
			}
			else {
				return false;
			}

		}
	}

	return s.size() == 0;
}

int main() {




	return 0;
}
















