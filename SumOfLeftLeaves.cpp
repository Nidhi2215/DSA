class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        queue<TreeNode *>q;
        q.push(root);
        TreeNode *temp=root;
        int sum=0;
        if(root!=NULL && root->left==NULL && root->right==NULL)
        return 0;
        while(q.empty()==false)
        {
            int count=q.size();
            for(int i=0;i<count;i++)
            {
                TreeNode *curr=q.front();
                q.pop();
                if(curr->left!=NULL && curr->left->left==NULL && curr->left->right==NULL)
                {   
                    sum+=curr->left->val;
                }
            
                if(curr->left!=nullptr)
                q.push(curr->left);
                
                if(curr->right!=nullptr)
                q.push(curr->right);
            }


        }
        return (sum);
    }
};
