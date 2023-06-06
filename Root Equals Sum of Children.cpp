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
public:
    bool checkTree(TreeNode* root) {
        if(root->val==NULL)
        return true;
        TreeNode *curr1=root->left;
        TreeNode *curr2=root->right;
        if(curr2==NULL && curr1==NULL)
        return true;
        int sum=0;
        if(root->left!=NULL)
        sum+=root->left->val;
        if(root->right!=NULL)
        sum+=root->right->val;
        return (root->val==sum && checkTree(root->left) && checkTree(root->right));
        
    }
};
