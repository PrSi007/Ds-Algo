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
    vector <int>v;
    
    bool check(TreeNode *root,int&k)
    {
        if(root==NULL)
            return false;
        for(int i=0;i<v.size();i++)
        {
            if(root->val!=v[i]&&root->val+v[i]==k)
                return true;
        }
        return (check(root->left,k)||check(root->right,k));
    }
    
    void inorder(TreeNode *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            v.push_back(root->val);
            inorder(root->right);
        }
    }
    
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
            return false;
        inorder(root);
        return check(root,k);
    }
};