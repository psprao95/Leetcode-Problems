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
    int minDepth(TreeNode* root) {
        if(!root)
        {
            return 0;
        }
        int left=minDepth(root->left);
        int right=minDepth(root->right);
        if(!left)
        {
            return right+1;
        }
        if(!right)
        {
            return left+1;
        }
        return min(right,left)+1;
    }
};
