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
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        int ans=0;
        queue <pair <TreeNode *,int>>q;
        q.push({root,0});
        while(q.empty()==false)
        {
            int count = q.size();
            for(int i=0;i<count;i++)
            {
                auto x = q.front();
                TreeNode *curr = x.first;
                int temp = x.second;
                q.pop();
                if(curr->left==NULL&&curr->right==NULL&&temp==1)
                    ans+=curr->val;
        
            if(curr->left!=NULL)
                q.push({curr->left,1});
            if(curr->right!=NULL)
                q.push({curr->right,0});
            }
        }
        return ans;
    }
};