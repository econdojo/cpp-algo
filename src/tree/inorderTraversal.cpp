#include "tree.hpp"

/*
In-order traversal.

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
*/

// Method: DFS, time O(n), space O(n)

vector<int> inorderTraversal(TreeNode* root) {
    static vector<int> v;
    if(!root){
        return v;
    }
    v = inorderTraversal(root->left);
    v.push_back(root->val);
    v = inorderTraversal(root->right);
    return v;
}