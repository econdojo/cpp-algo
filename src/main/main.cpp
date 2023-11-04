// #include "../hash_table/hash_table.hpp"
// #include "../linked_list/linked_list.hpp"
// #include "../array/array.hpp"
// #include "../bit/bit.hpp"
#include "../tree/tree.hpp"
// #include "../graph/graph.hpp"

int main(int argc, char **argv) {
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> v = inorderTraversal(root);
    for(auto i : v){
        cout << i << " ";
    }
    return 0;
}