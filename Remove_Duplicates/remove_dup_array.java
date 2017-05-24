public class Solution {
    public int removeDuplicates(int[] nums) {
        
        int count=0;
        int temp;
        boolean flag;
           for(int k=0;k<nums.length;k++)
           {
             temp=nums[k];
             flag=false;
             for(int j=0;j<count;j++)
             {
              
             if(temp==nums[j]) {
			   
                flag=true;
                break;
			   }
             }
             if(flag==false)
             {
                 nums[count]=temp;
                 count++;
             }
            
           }
		   return count;
        
    }
}
