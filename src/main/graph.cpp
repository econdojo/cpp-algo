#include "../graph/graph.hpp"

int graph(void) {
    vector<int> adj[5];
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    dfs(1, adj);
    cout << endl;
    bfs(1, adj);
    cout << endl;
    return 0;
}