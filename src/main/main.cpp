// #include "../hash_table/hash_table.hpp"
// #include "../linked_list/linked_list.hpp"
#include "../array/array.hpp"
// #include "../bit/bit.hpp"
// #include "../tree/tree.hpp"
// #include "../graph/graph.hpp"
#include "../queue/queue.hpp"

int main(int argc, char **argv) {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> res = permute1(nums);
    
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