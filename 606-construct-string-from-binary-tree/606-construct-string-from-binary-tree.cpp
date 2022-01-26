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
    string na="";
    void preorder(TreeNode *root)
    {
        if(root!=NULL)
        {
            na+="("+to_string(root->val);
            if(root->left==NULL&&root->right!=NULL)
                na+="()";
            preorder(root->left);
            preorder(root->right);
            na+=")";
        }
    }
    
    string tree2str(TreeNode* root) {
        if(root==NULL)
            return na;
        na=na+to_string(root->val);
        if(root->left==NULL&&root->right!=NULL)
            na+="()";
        preorder(root->left);
        preorder(root->right);
        return na;
    }
};