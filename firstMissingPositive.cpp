int firstMissingPositive(vector<int>& nums) {
       int high=nums.size();
       for(int i=0;i<nums.size();i++){
           while(nums[i]>0 && nums[i]<=high && nums[i]!=nums[nums[i]-1])
               swap(nums[i],nums[nums[i]-1]);
       }
       for(int i=0;i<nums.size();i++){
           if(nums[i]!=i+1)
               return i+1;
       }
        return high+1;
}