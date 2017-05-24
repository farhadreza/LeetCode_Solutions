public class Solution {
    public int removeElement(int[] nums, int val) {
        int count=0;
           
        for(int k=0;k<=nums.length-1;k++)
        {
             if(nums[k]!=val) 
             {
			   nums[count]=nums[k];
               count++;
			 }
        }
		return count;
    }
}