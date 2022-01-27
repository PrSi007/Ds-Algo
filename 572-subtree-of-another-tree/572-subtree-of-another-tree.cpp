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
    
    bool subTree(TreeNode* root,TreeNode* subroot)
    {
        if(root==NULL&&subroot==NULL)
            return true;
        if(root==NULL||subroot==NULL)
            return false;
        return ((root->val==subroot->val)&&subTree(root->left,subroot->left)&&subTree(root->right,subroot->right));
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL&&subRoot==NULL)
            return true;
        if(root==NULL||subRoot==NULL)
            return false;
        
        return (subTree(root,subRoot)||isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot));
    }
};