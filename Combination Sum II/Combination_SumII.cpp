class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<vector<int>> result;
      vector<int> vec;
      
      std::sort (candidates.begin(), candidates.end());
      
      combinationsum_helper(candidates,0,result,target,vec);
              
            
      return result;
    }
 
    void combinationsum_helper(vector<int>& candidates,int start,vector<vector<int>>& result, int target,vector<int>& vec)
    {
        if(!target)
        {
            result.push_back(vec);
            return;
        }
        
        for(int i=start;i<candidates.size() && target>=candidates[i];i++)
        {
          if(i==start || candidates[i]!=candidates[i-1])
          {
            vec.push_back(candidates[i]);
            combinationsum_helper(candidates,i+1,result,target-candidates[i],vec);
            vec.pop_back();
          }
        }
    }
};