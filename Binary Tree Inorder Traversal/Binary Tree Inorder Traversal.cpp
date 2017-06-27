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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> result;
        
        if(root==NULL) return result;
         if(root->left==NULL && root->right==NULL ) 
         {
             result.push_back(root->val);
             return result;
         }
        stack<TreeNode*> st;
        
        TreeNode* current=root;
        
        
        
        while(true)
        {
            while(current)
            {
              st.push(current);
              current=current->left;
            }
            if(st.empty()) break;
            
            current=st.top();
            st.pop();
            result.push_back(current->val);
            
            current=current->right;
            
            
            
        }
        return result;
      
    }
};