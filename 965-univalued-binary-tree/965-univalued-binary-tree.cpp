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
    int v=0;
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL)
            return true;
        if(v==0)
            v = root->val;
        return (v==root->val&&isUnivalTree(root->left)&&isUnivalTree(root->right));
    }
};