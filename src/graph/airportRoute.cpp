#include "graph.hpp"

/*
Find the minimum number of routes from a starting airport that must be added in order to reach all airports.

Reference: www.youtube.com/watch?v=qz9tKlF431k&list=PLvsr8Nz5WefPfhrmbVPvx58tLXkgAhKiG&index=62

int main(int argc, char **argv) {
    vector<string> airports = {
        "BGI", "CDG", "DEL", "DOH", "DSM", "EWR", "EYW", "HND", "ICN",
        "JFK", "LGA", "LHR", "ORD", "SAN", "SFO", "SIN", "TLV", "BUD"};
    vector<pair<string, string>> routes = {
        {"DSM", "ORD"},
        {"ORD", "BGI"},
        {"BGI", "LGA"},
        {"SIN", "CDG"},
        {"CDG", "SIN"},
        {"CDG", "BUD"},
        {"DEL", "DOH"},
        {"DEL", "CDG"},
        {"TLV", "DEL"},
        {"EWR", "HND"},
        {"HND", "ICN"},
        {"HND", "JFK"},
        {"ICN", "JFK"},
        {"JFK", "LGA"},
        {"EYW", "LHR"},
        {"LHR", "SFO"},
        {"SFO", "SAN"},
        {"SFO", "DSM"},
        {"SAN", "EYW"}};
    string start = "LGA";
    cout << airportRoute(airports, routes, start) << endl;
    return 0;
}
*/

// Kosaraju's algorithm

vector<int> adj1[maxN], adj2[maxN];
stack<int> st;
bool vis1[maxN], vis2[maxN];
int who[maxN], deg[maxN];

void dfs1(int u) {
    if (vis1[u])
        return;
    vis1[u] = true;
    for (auto v : adj1[u])
        dfs1(v);
    st.push(u);
}

void dfs2(int u, int rep) {
    if (vis2[u])
        return;
    vis2[u] = true;
    who[u] = rep;
    for (auto v : adj2[u])
        dfs2(v, rep);
}

int airportRoute(const vector<string> &airports, const vector<pair<string, string>> &routes, const string &start) {
    // Build graph
    int n = airports.size();
    unordered_map<string, int> id;
    for (int i = 0; i < n; i++)
        id[airports[i]] = i;
    
    for (auto &route : routes) {
        int u = id[route.first];
        int v = id[route.second];
        adj1[u].push_back(v);
    }

    // Reverse graph
    for (int u = 0; u < n; u++) {
        for (int v : adj1[u])
            adj2[v].push_back(u);
    }

    // DFS on original graph
    for (int u = 0; u < n; u++)
        dfs1(u);
    
    // DFS on reversed graph
    while (!st.empty()) {
        int u = st.top(); // u is the representative of a strongly connected component
        st.pop();
        dfs2(u, u);
    }

    // Count the number of edges between different strongly connected components
    for (int u = 0; u < n; u++) {
        for (int v : adj1[u]) {
            if (who[u] != who[v])
                deg[who[v]]++;
        }
    }

    // Count the number of strongly connected components that have no incoming edges
    int ans = 0;
    for (int u = 0; u < n; u++) {
        if (who[u] == u && deg[u] == 0 && u != who[id[start]])
            ans++;
    }
    return ans;
}