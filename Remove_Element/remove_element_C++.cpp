class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;         
        for(int k=0;k<nums.size();k++)     
        {
             if(nums[k]!=val) 
             {
			   nums[count]=nums[k];
	
               count++;
			 }
        }
		return count;
        
    }
};