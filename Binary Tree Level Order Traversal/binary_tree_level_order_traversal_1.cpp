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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> result;
        vector<int> vec;
        int height=0;
        queue<TreeNode*> q;
        if(root==NULL)
          return result;
          
        q.push(root);
        
        while(!q.empty())
        {
            int size=q.size();
            for(int i=0;i<size;i++)
            {
               vec.push_back(q.front()->val);
            
               if(q.front()->left)
                 q.push(q.front()->left);
               
               if(q.front()->right)
                 q.push(q.front()->right);  
               q.pop();
            }
             result.push_back(vec);
             if(!vec.empty())
              vec.clear();
            
            
        }       
        return result;
    }
    
   
};