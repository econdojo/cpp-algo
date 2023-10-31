// #include "../hash_table/hash_table.hpp"
// #include "../linked_list/linked_list.hpp"
// #include "../array/array.hpp"
// #include "../bit/bit.hpp"
#include "../tree/tree.hpp"
#include "../graph/graph.hpp"

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