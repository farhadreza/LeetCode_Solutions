class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
       vector< vector<int> > result;
       vector<int>::iterator it2;
       vector<int> vec(3);
      
       
       sort(nums.begin(), nums.end());
       
       if(nums.size()<3 || nums[0]>0)
         return result;
       for(int i=0;i<nums.size();i++)
       {
           if(i>0 && nums[i]!=0 && nums[i]==nums[i-1])
            continue;
            
            int target=nums[i];
          
               
               int p=i+1;
               int q=nums.size()-1;
               int prev_sum;
               
               while(p<q)
               {
              
               
               int sum_curr= nums[p]+nums[q];
               
               
               if(sum_curr+target==0)
               {
                 
                   vec[0]=target;
                   vec[1]=nums[p];
                   vec[2]=nums[q];
                   if(result.empty())
                   {
                   result.push_back(vec);
                   }
                   else
                   {
                      if( !((result.at(result.size()-1).at(0)==target) && (result.at(result.size()-1).at(1)==nums[p]) && (result.at(result.size()-1).at(2)==nums[q])) )
                       {
                           result.push_back(vec);
                       }
                       
                       
                   }
  
                  p++;
                  q--;
               }
               
              else if(sum_curr+target < 0)
               {
                   p++;
               }
              else
                {
                    q--;
                }
               
               
             } 
 
       }
      return result;  
    }
};