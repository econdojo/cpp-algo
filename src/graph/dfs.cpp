// Depth-ﬁrst search
#include "graph.hpp"

static bool visited[100] = {false};

void dfs(int s, vector<int> *adj) {
    if (visited[s])
        return;
    visited[s] = true;
    cout << s << "->";
    for (auto u : adj[s])
        dfs(u, adj);
}