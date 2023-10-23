#include "dynamic_programming.hpp"

/*
Find the length of the longest subsequence in an array of n elements such that all elements of the subsequence are sorted in increasing order.

int main(int argc, char **argv) {
    int array[] = {6, 2, 5, 1, 7, 4, 8, 3};
    int n = end(array)-begin(array);
    cout << subsequence(array, n) << endl;
    return 0;
}
*/

// Method 1: bottom-up, time O(n), space O(n)

int subsequence1(int *array, int n) {
    int length[n];
    int best = 0;
    for (int i = 0; i < n; i++) {
        length[i] = 1;
        for (int j = 0; j < i; j++)
            if (array[j] < array[i])
                length[i] = max(length[i], length[j] + 1);
        best = max(best, length[i]);
    }
    return best;
}