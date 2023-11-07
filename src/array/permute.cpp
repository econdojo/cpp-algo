#include "array.hpp"

/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Reference: youtube.com/watch?v=KukNnoN-SoY

int main(int argc, char **argv) {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = permute(nums);
    
    for (int i = 0; i < res.size(); i++) {
        cout << "[";
        for (int j = 0; j < res[i].size(); j++) {
            cout << res[i][j];
            if (j != res[i].size()-1) {
                cout << ", ";
            }
        }
        cout << "]";
        if (i != res.size()-1) {
            cout << ", ";
        }
    }
    return 0;
}
*/

// Method 1: backtracking, time O(n!), space O(n)

static vector<vector<int>> ans;

void backtrack(vector<int>& nums,vector<int> &v)
{
    if(nums.empty())
    {
        ans.push_back(v);
        return;
    }
    for(int i=0;i<nums.size();i++)
    {
        v.push_back(nums[i]);
        nums.erase(nums.begin()+i);
        backtrack(nums,v);
        nums.insert(nums.begin()+i,v.back());
        v.pop_back();
    }
}

vector<vector<int>> permute1(vector<int>& nums) {
    vector<int> v;
    backtrack(nums,v);
    return ans;
}