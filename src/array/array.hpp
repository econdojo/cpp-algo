#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
using namespace std;

class Array {
    private:
        int *array;
    public:
        Array(int *array) : array(array) {}
        int subsequence1(int n);
};

int coinChange1(int x);

#endif