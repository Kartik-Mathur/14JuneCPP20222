// GenericGraph.cpp
#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
using namespace std;

class Graph {
public:
	unordered_map<string, list<string> > adjList;

	void addEdge(string u, string v, bool bidir = true) {
		adjList[u].push_back(v);
		if (bidir) {
			adjList[v].push_back(u);
		}
	}

	void print() {
		for (auto p : adjList) {
			cout << p.first << "-->";
			for (auto child : p.second) {
				cout << child << " ";
			}
			cout << endl;
		}
		/*
		for (pair<string, list<string> > p : adjList) {
			cout << p.first << "-->";
			for (string child : p.second) {
				cout << child << " ";
			}
			cout << endl;
		}
		*/
	}
};

int main() {

	Graph g;
	g.addEdge("Modi", "Yogi", true);
	g.addEdge("Yogi", "Prabhu", false);
	g.addEdge("Prabhu", "Modi", false);
	g.addEdge("Modi", "Trump", true);
	g.addEdge("Putin", "Trump", false);
	g.addEdge("Putin", "Modi", false);
	g.addEdge("Putin", "Pope", false);

	g.print();

	return 0;
}
















