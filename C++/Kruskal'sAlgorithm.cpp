/*
Kruskal's algorithm on cpp
Author:Neetu Kumari
Date modified:19-10-2020
*/

#include<bits/stdc++.h>

using namespace std;

const int n = 1e5 + 6;
vector < int > parent(n);
vector < int > sz(n);

void makeSet(int v) {
  parent[v] = v;
  sz[v] = 1;
}
int findSet(int v) {
  if (v == parent[v])
    return v;
  return parent[v] = findSet(parent[v]);
}
void unionSet(int a, int b) {
  a = findSet(a);
  b = findSet(b);
  if (a != b) {
    if (sz[a] < sz[b])
      swap(a, b);
    parent[b] = a;
    sz[a] += sz[b];
  }
}

int main() {
  for (int i = 0; i < n; i++) {
    makeSet(i);
  }
  //x is no of vertices and y is no of edges
  int x, y;
  cout << "no of vertices:";
  cin >> x;
  cout << "no of edges:";
  cin >> y;

  vector < vector < int >> edges;
  for (int i = 0; i < y; i++) {
    int u, v, w; //w is weight of edge
    cout << "starting vertex:" << " end vertex:" << " weight of edge:" << endl;
    cin >> u >> v >> w;

    edges.push_back({
      w,
      u,
      v
    });
  }
  //sort edges according to increasing order of their weights
  sort(edges.begin(), edges.end());
  int cost = 0; //cost=sum of weight of all edges in the tree
  for (auto i: edges) {
    int w = i[0];
    int u = i[1];
    int v = i[2];
    int s = findSet(u);
    int t = findSet(v);
    if (s == t) {
      continue;
    } else {
      cout << u << " " << v << endl;
      cost += w; //add weight to cost
      unionSet(u, v);
    }
  }
  cout << cost;
}
