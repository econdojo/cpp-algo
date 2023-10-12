#include <iostream>
#include <vector>
#include <queue>
using namespace std;

#ifndef GRAPH_H
#define GRAPH_H

void dfs(int s, vector<int> *adj, bool *visited);

void bfs(int s, vector<int> *adj, bool *visited);

#endif