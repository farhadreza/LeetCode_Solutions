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
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string> result;
        if(root==NULL)
        {
            return result;
        }

        leaves(result,to_string(root->val), root);
        
        return result;
        
    }
    void leaves(vector<string>& result, string str, TreeNode* root)
    {
        if(root->left==NULL && root->right==NULL)
        {
          result.push_back(str);
          return;
        }

        if(root->left!=NULL)
           leaves(result,str+"->"+to_string(root->left->val), root->left);
           
        if(root->right!=NULL)
           leaves(result,str+"->"+to_string(root->right->val), root->right);
        
        
        
    }
};