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
    vector<double> averageOfLevels(TreeNode* root) {
        vector <double>v;
        if(root==NULL)
            return v;
        queue <TreeNode *>q;
        q.push(root);
        while(q.empty()==false)
        {
            int c = q.size();
            double s=0;
            for(int i=0;i<c;i++)
            {
                TreeNode *curr = q.front();
                q.pop();
                s+=curr->val;
                if(curr->left!=NULL)
                    q.push(curr->left);
                if(curr->right!=NULL)
                    q.push(curr->right);
            }
            v.push_back(double(s/c));
        }
        
        return v;
    }
};