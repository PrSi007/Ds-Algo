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
    int ans=0;
    
    int helper(TreeNode *root)
    {
        if(root==NULL)
            return 0;
        int l = helper(root->left);
        int r = helper(root->right);
        ans = ans + abs(l-r);
        return root->val+l+r;
    }
    
    int findTilt(TreeNode* root) {
        if(root==NULL)
            return 0;
        int temp = helper(root);
        return ans;
    }
};