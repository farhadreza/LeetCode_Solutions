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
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
         return true;
        if(root->left==NULL && root->right==NULL)
          return true;
        return isValidBST2(root,LONG_MIN,LONG_MAX);
    }
    
    bool isValidBST2(TreeNode* root, long min_val, long max_val)
    {
        if(root==NULL)
         return true;
        if((root->val <= min_val) || (root->val >= max_val))
          return false;
          
        return (isValidBST2(root->left,min_val, root->val) && isValidBST2(root->right,root->val,max_val));

    }
 
};