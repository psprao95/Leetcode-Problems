/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        helper(root,1,res);
        return res;
    }

    void helper(TreeNode *root,int level,vector<int> &res)
    {
        if(!root)
        {
            return;
        }
        if(res.size()<level)
        {
            res.push_back(root->val);
        }
        else{if(root->val>res[level-1])
        {
            res[level-1]=root->val;
        }}
        helper(root->left,level+1,res);
        helper(root->right,level+1,res);
    }
};
