#ifndef TREE_H
#define TREE_H

#include <iostream>
using namespace std;

// Binary tree node
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

 int maxPathSum1(TreeNode* root);

 vector<int> inorderTraversal(TreeNode* root);

#endif