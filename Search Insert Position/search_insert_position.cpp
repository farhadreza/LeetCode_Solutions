class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         for(int n=0;n<nums.size();n++)
        {
            if(nums[n]==target)
            {             
                return n;
            }
        }
        int count=0;
        for(int j=0;j<nums.size();j++)
        {
            if(nums[j]<target)
              count++;
        }
        
        return count;
    }
};