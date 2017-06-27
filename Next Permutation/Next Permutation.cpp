class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
       int i=0;
       int k=-1;
       for(i=nums.size()-2;i>=0;i--)
       {
           if(nums[i]<nums[i+1])
            {
                k=i;
                break;
            }
           
       }
       
       if(k==-1)
       {
           reverse(nums.begin(),nums.end());
           return;
       }
       
     
       int l=-1;
       for(int j=nums.size()-1;j>k;j--)
       {
           if(nums[j]>nums[k])
             {
                 l=j;
                 break;
             }
       
       }  
       swap(nums[k], nums[l]);

       
       reverse(nums.begin()+k+1,nums.end());
    }
    
};