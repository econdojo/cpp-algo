#include "../graph/graph.h"

using namespace std;

int graph(void) {
    vector<int> adj[5];
    bool dfs_visited[5] = {false};
    bool bfs_visited[5] = {false};
    adj[1].push_back(2);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[3].push_back(4);
    adj[4].push_back(1);
    dfs(1, adj, dfs_visited);
    cout << endl;
    bfs(1, adj, bfs_visited);
    cout << endl;
    return 0;
}