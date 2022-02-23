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
    
    bool valid(TreeNode *root,TreeNode *l,TreeNode *r)
    {
        if(root==NULL)
            return true;
        if(l!=NULL)
        {
            if(root->val<=l->val)
                return false;
        }
        if(r!=NULL)
        {
            if(root->val>=r->val)
                return false;
        }
        
        return valid(root->left,l,root)&&valid(root->right,root,r);
    }
    
    bool isValidBST(TreeNode* root) {
        return valid(root,NULL,NULL);
    }
};