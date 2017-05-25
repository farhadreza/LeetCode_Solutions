class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
       vector< vector<int> > result;
       vector<int>::iterator it2;
       vector<int> vec(4);

       
       sort(nums.begin(), nums.end());
       
       if(nums.size()<4)
         return result;
       for(int i=0;i<nums.size()-3;i++)
       {
           if(i>0 && nums[i]==nums[i-1])
            continue;
            
            
          for(int j=i+1;j<nums.size()-2;j++)
           {
               if(j>(i+1) && nums[j]==nums[j-1])
                  continue;

              
              int target2=nums[i]+nums[j];

               
               int p=j+1;

        
               int q=nums.size()-1;

               while(p<q)
               {

               int sum_curr= nums[p]+nums[q];

               if((sum_curr+target2)==target)
               {
                   vec[0]=nums[i];
                   vec[1]=nums[j];
                   vec[2]=nums[p];
                   vec[3]=nums[q];
                   if(result.empty())
                   {
                   result.push_back(vec);
                   }
                   else
                   {
                      if( !((result.at(result.size()-1).at(0)==nums[i]) && (result.at(result.size()-1).at(1)==nums[j]) && (result.at(result.size()-1).at(2)==nums[p]) && (result.at(result.size()-1).at(3)==nums[q])) )
                       {
                           result.push_back(vec);
                       }
                       
                       
                   }

                  p++;
                  q--;
                 while(q>p && nums[q]==nums[q+1])
                   q=q-1;
                 while(q>p && nums[p]==nums[p-1])
                   p=p+1;
                                    
               }
               
              else if((sum_curr+target2) < target)
               {
                   p++;
                   while(q>p && nums[p]==nums[p-1])
                      p=p+1;
               }
              else
                {
                   q--;
                   while(q>p && nums[q]==nums[q+1])
                     q=q-1;
                }
               
               
             } 
           }
        //  }
       }
      return result;  
    
        
    }
};