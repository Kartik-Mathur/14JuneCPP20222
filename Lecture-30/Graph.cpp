// Graph.cpp
#include <iostream>
#include <list>
#include <vector>
using namespace std;

class Graph {
public:
	list<int> *adjList;
	int n;

	Graph(int n) {
		this->n = n;
		adjList = new list<int>[n];
	}

	void addEdge(int u, int v, bool bidir = true) {
		adjList[u].push_back(v);
		if (bidir) {
			adjList[v].push_back(u);
		}
	}

	void print() {
		for (int i = 0; i < n; ++i)
		{
			cout << i << "--> ";
			for (auto neighbour : adjList[i]) {
				cout << neighbour << " ";
			}
			cout << endl;
		}
	}
};

int main() {

	Graph g(5);
	g.addEdge(0, 1);
	g.addEdge(0, 4);
	g.addEdge(1, 4);
	g.addEdge(1, 3);
	g.addEdge(1, 2);
	g.addEdge(3, 2);
	g.addEdge(3, 4);

	g.print();


	return 0;
}
















