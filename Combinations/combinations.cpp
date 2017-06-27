class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
      vector<vector<int>> result;
      vector<int> vec;
      vector<int> candidates;
      for(int i=1;i<=n;i++)
      {
          candidates.push_back(i);
      }
      combinationsum_helper(candidates,0,result,k,vec);
              
            
      return result;
    }
    
   
    
    void combinationsum_helper(vector<int>& candidates,int start,vector<vector<int>>& result, int k,vector<int>& vec)
    {
        if(k==0)
        {
            result.push_back(vec);
            return;
        }
        
        for(int i=start;i<candidates.size();i++)
        {        
            vec.push_back(candidates[i]);
            combinationsum_helper(candidates,i+1,result,k-1,vec);
            vec.pop_back();      
        }
    }
};