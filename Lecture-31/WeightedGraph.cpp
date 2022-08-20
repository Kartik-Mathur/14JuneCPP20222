// WeightedGraph.cpp
#include <iostream>
#include <queue>
#include <list>
#include <map>
#include <set>
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

	int dijkstra(T src, T des) {
		set<pair<int, T> > s;

		unordered_map<T, int> distance;
		unordered_map<T, T> parent;

		for (auto p : adjList) {
			distance[p.first] = INT_MAX;
		}

		distance[src] = 0;
		parent[src] = src;
		s.insert({0, src});

		while (!s.empty()) {
			auto f = s.begin();
			T n = (*f).second;
			int nd = (*f).first;
			s.erase(f);

			for (auto p : adjList[n]) {
				T c = p.first;
				int ed = p.second;
				if (nd + ed < distance[c]) {
					auto x = s.find({distance[c], c});
					if (x != s.end()) {
						s.erase(x);
					}
					distance[c] = nd + ed;
					s.insert({distance[c], c});
					parent[c] = n;
				}
			}
		}

		for (auto p : distance) {
			cout << "Distance of " << p.first << " from " << src << " : " << p.second << endl;
		}
		T temp = des;
		while (des != src) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << src << endl;

		return distance[temp];
	}
};

int main() {
	Graph<string> g;
	g.addEdge("Amritsar", "Jaipur", 5);
	g.addEdge("Amritsar", "Agra", 1);
	g.addEdge("Delhi", "Agra", 1);
	g.addEdge("Delhi", "Jaipur", 2);
	g.addEdge("Mumbai", "Jaipur", 8);
	g.addEdge("Mumbai", "Bhopal", 3);
	g.addEdge("Agra", "Bhopal", 2);
	g.print();

	int ans = g.dijkstra("Amritsar", "Jaipur");
	cout << "Distance of Amritsar to Mumbai: " << ans << endl;


	return 0;
}
















