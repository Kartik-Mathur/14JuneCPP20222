// WeightedGraph.cpp
#include <iostream>
#include <queue>
#include <list>
#include <map>
#include <unordered_map>
using namespace std;
template<typename T>
class Graph {
public:
	unordered_map<T, list<pair<T, int> > > adjList;
	void addEdge(T u, T v, int dist, bool bidir = true) {
		adjList[u].push_back({v, dist});
		if (bidir) {
			adjList[v].push_back({u, dist});
		}
	}

	void print() {
		for (auto p : adjList) {
			cout << p.first << ": ";
			for (auto n : p.second) {
				cout << "(" << n.first << ", " << n.second << ") ";
			}
			cout << endl;
		}
	}
};

int main() {
	Graph<string> g;
	g.addEdge("Amritsar", "Jaipur", 4);
	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Mumbai", "Jaipur", 8);
	g.addEdge("Mumbai", "Bhopal", 3);
	g.addEdge("Agra", "Bhopal", 2);

	g.print();


	return 0;
}
















