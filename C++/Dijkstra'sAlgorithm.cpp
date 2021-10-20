/* 
Dijkstra's algorithm in cpp
Author:Neetu Kumari
Date Modified:20-10-2021
*/

#include<bits/stdc++.h>

using namespace std;

const int infinity = 1e7;

int main() {
  int a, b; //a=no of vertices, b=no of edges
  cin >> a >> b;
  vector < int > dist(a + 1, infinity);
  vector < vector < pair < int, int > > > graph(a + 1);
  for (int i = 0; i < b; i++) {
    int u, v, w;
    cin >> u >> v >> w;
    graph[u].push_back({
      v,
      w
    });
    graph[v].push_back({
      u,
      w
    });
  }
  int source;
  cin >> source;
  dist[source] = 0;
  set < pair < int, int > > s;
  s.insert({
    0,
    source
  });
  while (!s.empty()) {
    auto x = * (s.begin());
    s.erase(x);
    for (auto it: graph[x.second]) {
      if (dist[it.first] > dist[x.second] + it.second) {
        s.erase({ dist[it.first], it.first });
        dist[it.first] = dist[x.second] + it.second;
        s.insert({ dist[it.first], it.first });
      }
    }
  }
  for (int i; i <= a; i++) {
    if (dist[i] < infinity) {
      cout << "distance:" << dist[i] << " ";
    }
  }
}

/* sample input of graph
4 4
1 2 24
1 4 20
3 1 3
4 2 12
1
Output: distance:0 distance:24 distance:3 distance:20 
*/
