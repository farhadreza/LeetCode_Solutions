class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> temp;
        bool flag=false;
        for(int i=0;i<=nums.size()-1; i++)
        {
          for(int j=0;j<=nums.size()-1 & j!=i; j++)
        {
            if((nums.at(i)+nums.at(j))==target)
            {
                temp.push_back(i);
                temp.push_back(j);
                flag=true;
                break;
                
            }
          }
          if(flag==true) break;
        }
        return temp;
        
    }
};