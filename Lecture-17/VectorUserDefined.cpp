// VectorUserDefined.cpp
#include <iostream>
using namespace std;

template<typename T>
class Vector {
public:
	T *a;
	int cs;
	int cap;

	Vector(int s = 1) {
		a = new T[s];
		cs = 0;
		cap = s;
	}

	void push_back(T data) {
		if (cs == cap) {
			// Purane array ko store karo
			T *olda = a;
			int olds = cs;

			// new array of double size create krna
			a = new T[2 * cap];
			cap *= 2;

			// Purane array se new array mei copy krna elements ko
			for (int i = 0; i < olds; ++i)
			{
				a[i] = olda[i];
			}

			// delete the olda
			delete []olda;
		}

		a[cs++] = data;
	}

	void pop_back() {
		if (cs > 0) {
			cs--;
		}
	}

	bool empty() {
		return cs == 0; // 0 == 0(true), 5 == 0(false)
	}

	int size() {
		return cs;
	}

	int capacity() {
		return cap;
	}

	T operator[](int indx) {
		return a[indx];
	}
};


int main() {

	Vector<int> v;

	// v.push_back('A');
	// v.push_back('B');
	// v.push_back('C');
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	cout << "capacity: " << v.capacity() << endl;
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	return 0;
}
















