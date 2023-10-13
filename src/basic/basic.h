#include <algorithm>
#include <iostream>
using namespace std;

#ifndef BASIC_H
#define BASIC_H

class Num {
    public:
        Num(int n);
        int getNum();
    private:
        int num;
};

int coin_change(int x);

int subsequence(int *array, int n);

void int_bit(int x);

#endif