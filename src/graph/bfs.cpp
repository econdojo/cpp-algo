// Breadth-first search
#include "graph.h"

void bfs(int s, vector<int> *adj, bool *visited) {
    queue<int> q;
    q.push(s);
    visited[s] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << "->";
        for (auto v : adj[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}