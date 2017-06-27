class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    
      vector<int> nums2;
      
      for(int i=1;i<=nums.size();i++)
      {
          int index=abs(nums[i-1])-1;
        
        if(nums[index]>0)
         {
             nums[index]=-nums[index];
            
        
         }
        
           
      }
      for(int i=1;i<=nums.size();i++)
      {
          if(nums[i-1]>0)
          {
            nums2.push_back(i);
          }
         
      }
     return nums2;
    }
};