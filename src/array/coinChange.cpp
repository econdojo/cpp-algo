#include "array.hpp"

/*
Given a set of coin values coins = {1, 3, 4} and a target sum of money n, our task is to find the minimum number of coins required to form the sum n. Assume that we have an unlimited supply of coins of each type.

int main(int argc, char **argv) {
    cout << coinChange(850) << endl;
    return 0;
}
*/

// Method 1: dynamic programming (recursion + memoization), time O(n), space O(n)

static vector<int> coins = {1, 3, 4};
static vector<int> values(1000,-1); // memoization

int coinChange1(int x) {
    if (x < 0) return 1000000;
    if (x == 0) return 0;
    if (values[x] != -1) return values[x];
    int best = 1000000;
    for (int i = 0; i < 3; i++) {
        best = min(best, coinChange1(x-coins[i])+1);
    }
    values[x] = best;
    return best;
}