// Breadth-first search
#include "graph.hpp"

static bool visited[100] = {false};

void bfs(int s, vector<int> *adj) {
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