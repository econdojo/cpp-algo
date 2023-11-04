#include "tree.hpp"

/*
A path in a binary tree is a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can only appear in the sequence at most once. Note that the path does not need to pass through the root. The path sum of a path is the sum of the node's values in the path. Given the root of a binary tree, return the maximum path sum of any non-empty path.

int main(int argc, char **argv) {
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout << maxPathSum(root) << endl;
    return 0;
}
*/

// Method 1: recursion, time O(n), space O(1)

static int maxSum = INT_MIN;

int maxGain(TreeNode* root)
{
    if(!root) return 0;
    int l = max(maxGain(root->left), 0);
    int r = max(maxGain(root->right), 0);
    int newPrice = root->val+l+r;
    maxSum = max(maxSum, newPrice);
    return root->val+max(l, r);
}

int maxPathSum1(TreeNode* root) {
    maxGain(root);
    return maxSum;
}