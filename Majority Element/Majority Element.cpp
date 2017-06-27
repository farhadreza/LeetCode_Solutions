class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
    int n= floor(nums.size()/2)+1;
    map<int,int> mp;
    map<int,int>::iterator it;
    
    for(int i=0;i<nums.size();i++)
    {
        it=mp.find(nums[i]);
        if(it==mp.end())
        {
            mp.insert(pair<int,int>(nums[i],1));
        }
        else
          it->second=mp[nums[i]]+1;
        
    }
    int element;
    
    for(it=mp.begin();it!=mp.end();it++)
    {
       if(it->second>=n)
        {        
          element=it->first;
          break;
        }
    }
    return element;
    
        
    }
};