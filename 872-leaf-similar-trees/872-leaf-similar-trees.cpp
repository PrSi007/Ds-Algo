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
    
    void sum(TreeNode *root,vector <int>&v)
    {
        if(root!=NULL)
        {
            if(root->left==NULL&&root->right==NULL)
                v.push_back(root->val);
            sum(root->left,v);
            sum(root->right,v);
        }
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector <int> v1,v2;
        if(root1==NULL||root2==NULL)
            return false;
        sum(root1,v1);
        sum(root2,v2);
        return (v1==v2);
    }
};