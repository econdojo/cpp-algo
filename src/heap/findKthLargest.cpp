#include "heap.hpp"

/*
Given an integer array nums and an integer k, return the kth largest element in the array. Note that it is the kth largest element in the sorted order, not the kth distinct element.

int main(int argc, char **argv) {
    vector<int> nums = {3,2,1,5,6,4};
    cout << findKthLargest(nums, 2) << endl;
    return 0;
}
*/

// Method 1: min-heap, time O(nlogk), space O(k)

int findKthLargest1(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> min_heap(nums.begin(), nums.begin() + k);
    
    for (int i = k; i < nums.size(); i++) {
        if (nums[i] > min_heap.top()) {
            min_heap.pop();
            min_heap.push(nums[i]);
        }
    }
    
    return min_heap.top();
}