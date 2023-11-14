// #include "../table/table.hpp"
// #include "../list/list.hpp"
// #include "../array/array.hpp"
// #include "../bit/bit.hpp"
// #include "../tree/tree.hpp"
// #include "../graph/graph.hpp"
// #include "../queue/queue.hpp"
// #include "../stack/stack.hpp"
#include "../heap/heap.hpp"

int main(int argc, char **argv) {
    vector<int> nums = {3,2,1,5,6,4};
    cout << findKthLargest1(nums, 2) << endl;
    return 0;
}