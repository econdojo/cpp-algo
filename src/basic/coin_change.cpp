// Minimum coin change using dynamic programming (recursion + memoization)
#include "basic.hpp"

static int coins[] = {1, 3, 4};
static int values[1000] = {[0 ... 999] = -1}; // memoization

int coin_change(int x) {
    if (x < 0) return 1000000;
    if (x == 0) return 0;
    if (values[x] != -1) return values[x];
    int best = 1000000;
    for (int i = 0; i < 3; i++) {
        best = min(best, coin_change(x-coins[i])+1);
    }
    values[x] = best;
    return best;
}