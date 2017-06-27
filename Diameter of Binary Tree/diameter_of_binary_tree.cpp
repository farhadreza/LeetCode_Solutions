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
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)
         return 0;

        int diameter= height(root->left)+height(root->right);
        
        return max(diameter, max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
    }
    
    int height(TreeNode* root)
    {
        if(root==NULL)
         return 0;
      
        return max(1+height(root->left), 1+height(root->right));
        
    }
};