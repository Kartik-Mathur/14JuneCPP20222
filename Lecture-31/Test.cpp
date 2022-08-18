// GenericGraph.cpp
#include <iostream>
#include <unordered_map>
#include <map>
#include <list>
#include <queue>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adjList;

	void addEdge(T u, T v, bool bidir = true) {
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
	}

	void bfs(T src) {
		unordered_map<T, bool> visited;
		queue<T> q;

		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			T f = q.front();
			q.pop();
			cout << f << " ";
			for (auto neighbours : adjList[f]) {
				if (!visited[neighbours]) {
					q.push(neighbours);
					visited[neighbours] = true;
				}
			}
		}
		cout << endl;
	}

	void SSSP(T src, T des) {
		unordered_map<T, bool> visited;
		queue<T> q;
		unordered_map<T, T> parent;
		unordered_map<T, int> distance;

		q.push(src);
		visited[src] = true;
		parent[src] = src;
		distance[src] = 0;

		while (!q.empty()) {
			T f = q.front();
			q.pop();

			for (auto neighbours : adjList[f]) {
				if (!visited[neighbours]) {
					parent[neighbours] = f;
					distance[neighbours] = distance[f] + 1;
					q.push(neighbours);
					visited[neighbours] = true;
				}
			}
		}

		// Print har node ka source se shortest distance
		// for (auto p : distance) {
		// 	cout << "Distance of " << p.first << " from " << src << " : "
		// 	     << p.second << endl;
		// }
		cout << "Shortest Distance is : " << distance[des] << endl;

		// path print to reach from src to des
		while (des != src) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << src << '\n';
	}

	void dfsHelper(T src, unordered_map<T, bool> &visited) {
		visited[src] = true;
		cout << src << " ";
		for (auto neighbours : adjList[src]) {
			if (!visited[neighbours]) {
				dfsHelper(neighbours, visited);
			}
		}
	}

	void dfs(T src) {
		unordered_map<T, bool > visited;
		int component = 1;
		dfsHelper(src, visited);

		for (auto p : adjList) {
			if (!visited[p.first]) {
				component++;
				dfsHelper(p.first, visited);
			}
		}

		cout << endl << "Components in graph: " << component << endl;
	}
};

int main() {

	Graph<int> g;
	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 0; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice + board[u + dice];

			g.addEdge(u, v, false);
		}
	}

	g.SSSP(0, 36);

	// g.addEdge('A', 'B');
	// g.addEdge('C', 'B');
	// g.addEdge('C', 'D');
	// g.addEdge('E', 'D');
	// g.addEdge('E', 'F');
	// g.addEdge('C', 'E');
	// g.addEdge('A', 'D');

	// g.addEdge('Z', 'X');
	// g.addEdge('Y', 'X');
	// g.addEdge('Y', 'M');

	// g.addEdge('J', 'I');
	// g.addEdge('J', 'K');
	// g.addEdge('L', 'K');
	// g.dfs('A');

	// g.bfs('A');

	// g.SSSP('A', 'F');
	// g.addEdge(0, 1);
	// g.addEdge(0, 4);
	// g.addEdge(2, 4);
	// g.addEdge(3, 4);
	// g.addEdge(3, 2);
	// g.addEdge(3, 5);
	// g.addEdge(2, 1);
	// g.print();
	// cout << endl;
	// g.bfs(0);
	// g.addEdge("Modi", "Yogi", true);
	// g.addEdge("Yogi", "Prabhu", false);
	// g.addEdge("Prabhu", "Modi", false);
	// g.addEdge("Modi", "Trump", true);
	// g.addEdge("Putin", "Trump", false);
	// g.addEdge("Putin", "Modi", false);
	// g.addEdge("Putin", "Pope", false);


	return 0;
}
















