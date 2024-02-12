#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <vector>
using namespace std;

struct array_t {
    int *data;
    size_t size;

    array_t(size_t size) : size(size) {  // Constructor
        this->data = new int[size];
    }

    ~array_t() {  // Destructor
        delete[] this->data;  // delete 'this' automatically happens
    }

    void array_set(size_t index, int value) {
        this->data[index] = value;
    }

    int array_get(size_t index) {
        return this->data[index];
    }
};

void arrayStruct();

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