public class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        int[] temp= new int[2];
        boolean flag=false;
        for(int i=0;i<=nums.length-1; i++)
        {
          for(int j=0;j<=nums.length-1 & j!=i; j++)
        {
            if((nums[i]+nums[j])==target)
            {
                 temp[0]=i;
                 temp[1]=j;
                 flag=true;
                 break;
                
            }
          }
          if(flag==true) break;
        }
        return temp;
        
    
        
    }
}