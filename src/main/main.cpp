// #include "../hash_table/hash_table.hpp"
// #include "../linked_list/linked_list.hpp"
// #include "../array/array.hpp"
// #include "../bit/bit.hpp"
#include "../tree/tree.hpp"
#include "../graph/graph.hpp"

int main(int argc, char **argv) {
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout << maxPathSum1(root) << endl;
    return 0;
}