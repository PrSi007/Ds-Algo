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
    
    void traverse(TreeNode *root,int&k,int&ans)
    {
        if(root!=NULL)
        {
            traverse(root->left,k,ans);
            if(k==1)
                ans=root->val;
            k--;
            traverse(root->right,k,ans);
        }
    }
    
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        traverse(root,k,ans);
        return ans;
    }
};