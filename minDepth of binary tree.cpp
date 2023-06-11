/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    int ReturningTheNumberOfBranches(TreeNode *this_node) {
        if (this_node == nullptr) return 0;
        int sum_left = ReturningTheNumberOfBranches(this_node -> left);
        int sum_right = ReturningTheNumberOfBranches(this_node -> right);
        if (sum_left == 0 || sum_right == 0) return sum_left + sum_right + 1;
        return (sum_left >= sum_right) ? sum_right + 1: sum_left + 1;
    }

public:
    int minDepth(TreeNode* root) {
        return ReturningTheNumberOfBranches(root);
    }
};
