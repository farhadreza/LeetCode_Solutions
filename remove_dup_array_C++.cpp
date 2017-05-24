class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count=0;
        int temp;
        bool flag;         
        for(int k=0;k<nums.size();k++)
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
};