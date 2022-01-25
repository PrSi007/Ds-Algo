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
    
    void inorder(TreeNode *root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            if(root!=start)
            {
                start->right = root;
                start=root;
                start->left=NULL;
            }
            inorder(root->right);
        }
    }
    
    TreeNode *start;
    TreeNode* increasingBST(TreeNode* root) {
        if(root==NULL)
            return NULL;
        
        TreeNode *curr = root;
        while(curr->left!=NULL)
            curr=curr->left;
        start = curr;
        inorder(root);
        return curr;
    }
};