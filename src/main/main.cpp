#include "../hash_table/hash_table.hpp"

int main(int argc, char **argv) {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = twoSum1(nums, target);
    cout << result[0] << " " << result[1] << endl;
    return 0;
}