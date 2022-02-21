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
    
    void minDiff(TreeNode *root,int&ans,int&prev)
    {
        if(root!=NULL)
        {
            minDiff(root->left,ans,prev);
            
            if(prev==-1)
                prev=root->val;
            else
            {
                ans=min(ans,root->val-prev);
                prev=root->val;
            }
            minDiff(root->right,ans,prev);
        }
    }

    int getMinimumDifference(TreeNode* root) {
       if(root==NULL)
           return 0;
        int ans=INT_MAX,prev=-1;
        minDiff(root,ans,prev);
        return ans;
    }
};