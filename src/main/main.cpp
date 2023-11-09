// #include "../table/table.hpp"
// #include "../list/list.hpp"
// #include "../array/array.hpp"
// #include "../bit/bit.hpp"
// #include "../tree/tree.hpp"
// #include "../graph/graph.hpp"
// #include "../queue/queue.hpp"
#include "../stack/stack.hpp"
#include <vector>

int main(int argc, char **argv) {
    vector<string> s = {"LA"};
    cout << s[0] << endl;

    vector<vector<int>> a(3, vector<int>(3, 5));
    cout << a[0][0] << endl;
    return 0;
}