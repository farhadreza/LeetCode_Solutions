class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        
  
        if(nums.size()<=1)
          return false;
       // sort(nums.begin(),nums.end());
       //vector<int>::iterator it;
       // multimap<int,int> mp;
        map<long,int> mp;
       // map<int,int>::iterator itlow;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
         //  if(itlow!=mp.end() && (i- itlow->second)> k)
           if(abs(i- l)> k)
           {
               mp.erase(nums[l++]);
            // mp.erase(itlow);
           }
           
           auto itlow = mp.lower_bound((long)nums[i]-(long)t);  // itlow points to the difference
           
           if(itlow!=mp.end() && abs((long)itlow->first- (long)nums[i]) <= t)
             return true;
           
           mp[nums[i]]=i;
           
       //  mp.insert(make_pair(nums[i],i));
        }
 
        return false;
    }
    
};