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
    bool isBalanced(TreeNode* root) {
        if(!root)
        {
            return true;
        }
        int left=helper(root->left);
        int right=helper(root->right);
        if(abs(left-right)>1)
        {
            return false;
        }
        return isBalanced(root->left)&&isBalanced(root->right);
      

    }

    int helper(TreeNode *root)

    {
        if(!root)
        {
            return 0;
        }
        int left=helper(root->left);
        int right=helper(root->right);
        return max(left,right)+1;
    }
};
