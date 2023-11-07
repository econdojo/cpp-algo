#include "array.hpp"

/*
Find the length of the longest subsequence in an array of n elements such that all elements of the subsequence are sorted in increasing order.

int main(int argc, char **argv) {
    vector<int> array = {6, 2, 5, 1, 7, 4, 8, 3};
    int n = array.end()-array.begin();
    Array a(array);
    cout << a.subsequence(n) << endl;
    return 0;
}
*/

// Method 1: dynamic programming (bottom-up), time O(n), space O(n)

int Array::subsequence1(int n) {
    vector<int> length(n,0);
    int best = 0;
    for (int i = 0; i < n; i++) {
        length[i] = 1;
        for (int j = 0; j < i; j++)
            if (this->array[j] < this->array[i])
                length[i] = max(length[i], length[j] + 1);
        best = max(best, length[i]);
    }
    return best;
}