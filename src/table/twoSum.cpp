#include "table.hpp"

/*
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice. You can return the answer in any order.

int main(int argc, char **argv) {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}
*/

// Method 1: hash table, time O(n), space O(n)

vector<int> twoSum1(vector<int> &rNums, int target) {
    unordered_map<int, int> numMap;
    int n = rNums.size();
    for (int i = 0; i < n; i++) {
        int complement = target - rNums[i];
        if (numMap.count(complement)) {
            return {numMap[complement], i};
        }
        numMap[rNums[i]] = i;
    }
    return {}; // no solution found
}

// Method 2: brute force, time O(n^2), space O(1)

vector<int> twoSum2(vector<int> &rNums, int target) {
    int n = rNums.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (rNums[i] + rNums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}