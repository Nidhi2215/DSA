
class Solution {
public:
    int preIndex=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int is=0,ie=preorder.size()-1;
        TreeNode *root=cTree(preorder,inorder,is,ie);
        return root;
    }
    TreeNode *cTree(vector<int>preorder,vector<int>inorder,int is,int ie)
    {
        if(is>ie)
        return NULL;
        TreeNode *root=new TreeNode(preorder[preIndex++]);
        int inIndex;
        for(int i=is;i<=ie;i++)
        {
            if(inorder[i]==root->val)
            {
                inIndex=i;
                break;
            }
        }
        root->left=cTree(preorder,inorder,is,inIndex-1);
        root->right=cTree(preorder,inorder,inIndex+1,ie);
        return root;
    }

};
