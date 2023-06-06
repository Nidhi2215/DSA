class Solution {
public:
    int isb(TreeNode* root)
    {
        if (root == NULL)
            return 0;
        
        int lh = isb(root->left);
        if (lh == -1)
            return -1;
        
        int rh = isb(root->right);
        if (rh == -1)
            return -1;
        
        if (abs(lh - rh) > 1)
            return -1;
        else
            return max(lh, rh) + 1;
    }
    
    bool isBalanced(TreeNode* root) {
        int res = isb(root);
        if (res == -1)
            return false;
        else
            return true;
    }
};
