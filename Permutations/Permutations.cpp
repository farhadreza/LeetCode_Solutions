class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
    
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
        
        
        for(int i=start;i<nums.size();i++)
        {
            
            swap(nums[start],nums[i]);
            permute_helper(nums,start+1,result);
            swap(nums[start],nums[i]);
            
        }
    }
};