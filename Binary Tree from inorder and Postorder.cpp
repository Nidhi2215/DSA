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
    int postIndex = 0;

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        postIndex = postorder.size() - 1;
        int is = 0;
        int ie = inorder.size() - 1;
        TreeNode* root = cTree(inorder, postorder, is, ie);
        return root;
    }

    TreeNode* cTree(vector<int>& inorder, vector<int>& postorder, int is, int ie) {
        if (is > ie)
            return nullptr;
        TreeNode* root = new TreeNode(postorder[postIndex--]);
        int inIndex;
        for (int i = is; i <= ie; i++) {
            if (inorder[i] == root->val) {
                inIndex = i;
                break;
            }
        }
        root->right = cTree(inorder, postorder, inIndex + 1, ie);
        root->left = cTree(inorder, postorder, is, inIndex - 1);
        return root;
    }
};
