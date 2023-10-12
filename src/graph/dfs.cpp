// Depth-ﬁrst search
#include "graph.h"

void dfs(int s, vector<int> *adj, bool *visited) {
    if (visited[s])
        return;
    visited[s] = true;
    cout << s << "->";
    for (auto u : adj[s])
        dfs(u, adj, visited);
}