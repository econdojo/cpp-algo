#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>
#include <string>
#include <stack>
#include <queue>
using namespace std;

const int maxN = 100;

void dfs(int s, vector<int> *adj);

void bfs(int s, vector<int> *adj);

int airportRoute(const vector<string> &airports, const vector<pair<string, string>> &routes, const string &start);

#endif