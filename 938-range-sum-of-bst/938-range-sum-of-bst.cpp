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
    void sumBst(TreeNode *root,int &ans,int low,int high)
    {
        if(root==NULL)
            return;
        sumBst(root->left,ans,low,high);
        if(root->val>=low&&root->val<=high)
            ans+=root->val;
        sumBst(root->right,ans,low,high);
    }
    
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root==NULL)
            return 0;
        int ans=0;
        sumBst(root,ans,low,high);
        return ans;
    }
};