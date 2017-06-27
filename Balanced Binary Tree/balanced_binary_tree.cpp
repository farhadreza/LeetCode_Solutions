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
         if(root==NULL)
           return true;
        if(root->left==NULL && root->right==NULL)
          return true;
        
        if(isBalanced(root->left) && isBalanced(root->right) && abs(height(root->left)-height(root->right))<=1)
         {
             return true;
             
         }
         
         return false;
            
        
    }
    
    int height(TreeNode* root)
    {
        if(root==NULL)
           return 0;
        if(root->left==NULL && root->right==NULL)
          return 1;

      return 1+ max (height(root->right), height(root->left));
    }
};