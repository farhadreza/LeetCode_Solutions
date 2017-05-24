public class Solution {
    public int searchInsert(int[] nums, int target) {
        
        boolean found=false;
        
       for(int n=0;n<nums.length;n++)
        {
            if(nums[n]==target)
            {
                found=true;
                return n;
            }
        }
        int count=0;
        if(found==false)
        {
        
        for(int j=0;j<nums.length;j++)
        {
            if(nums[j]<target)
              count++;
        }
        
        }
        return count;
    }
}