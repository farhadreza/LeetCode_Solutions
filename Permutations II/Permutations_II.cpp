class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
     vector<vector<int>> result;
     permute_helper(nums,0,result);

     return result;
        
    }
    
    
    
    void permute_helper(vector<int> nums, int start, vector<vector<int>>& result)
    {
        if(start>=nums.size())
        {
            result.push_back(nums);
            return;
        }
        
        unordered_set<int> set;
        
        for(int i=start;i<nums.size();i++)
        {
            if(set.count(nums[i])>0)
              continue;
            set.insert(nums[i]);
            
            swap(nums[start],nums[i]);
            permute_helper(nums,start+1,result);
            swap(nums[start],nums[i]);
            
            
        }
    }
};