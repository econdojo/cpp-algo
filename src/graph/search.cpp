#include "graph.hpp"

/*
In the adjacency list representation, each node x in the graph is assigned an adjacency list that consists of nodes to which there is an edge from x. Both BFS and DFS algorithms are given a starting node in the graph, and they visit all nodes that can be reached from the starting node.

int main(int argc, char **argv) {
    vector<int> adj[5];
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    dfs(1, adj);
    bfs(1, adj);
    return 0;
}
*/

// Breadth-first search

static bool visited1[100] = {false};

void bfs(int s, vector<int> *adj) {
    queue<int> q;
    q.push(s);
    visited1[s] = true;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        cout << u << "->";
        for (auto v : adj[u]) {
            if (!visited1[v]) {
                q.push(v);
                visited1[v] = true;
            }
        }
    }
}

// Depth-first search

static bool visited2[100] = {false};

void dfs(int s, vector<int> *adj) {
    if (visited2[s])
        return;
    visited2[s] = true;
    cout << s << "->";
    for (auto u : adj[s])
        dfs(u, adj);
}