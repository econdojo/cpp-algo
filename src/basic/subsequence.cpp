// Longest increasing subsequence using dynamic programming (bottom-up)
#include "basic.hpp"

int subsequence(int *array, int n) {
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