#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <vector>
using namespace std;

class Array {
    private:
        vector<int> array;
    public:
        Array(vector<int> &array) : array(array) {}
        int subsequence1(int n);
};

int coinChange1(int x);

vector<vector<int>> permute1(vector<int>& nums);

#endif