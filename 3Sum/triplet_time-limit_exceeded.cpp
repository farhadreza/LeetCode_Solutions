class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
       vector< vector<int> > result;
     //  vector< vector<int> >::iterator it;
       vector<int>::iterator it2;
       vector<int> vec(3);  
       
       bool flag=true;
       int count=0;
       
       sort(nums.begin(), nums.end());
       
       if(nums.size()<3 || nums[0]>0)
         return result;
       for(int i=0;i<nums.size();i++)
       {
           if(i>0 && nums[i]!=0 && nums[i]==nums[i-1])
            continue;
           for(int j=i+1;j<nums.size();j++)
           {
             //  if(j==i)
             //   continue;
                
             if(j> (i+1) && nums[j]!=0 && nums[j]==nums[j-1])
                  continue;
            
                
               int sum= nums[i]+nums[j];
               flag=true;
               
              
              it2=std::find(nums.begin(),nums.end(), -sum);
         
             
               
               if(it2!=nums.end())
               {
                    auto pos = it2 - nums.begin();
                    if(pos==i || pos==j)
                       continue;
                  
                   for(int k=0;k<result.size();k++)
                   {
                   
                       
                       if( (result.at(k).at(0)==nums[i] || result.at(k).at(0)==nums[j] || result.at(k).at(0)==-sum) && (result.at(k).at(1)==nums[i] || result.at(k).at(1)==nums[j] || result.at(k).at(1)==-sum) && (result.at(k).at(2)==nums[i] || result.at(k).at(2)==nums[j] || result.at(k).at(2)==-sum) ) 
                       {
                           flag=false;
                           break;
                       }
                     // }
                   }
                   
                 
                   if(flag)
                   {
                               
                   vec[0]=nums[i];
                   vec[1]=nums[j];
                   vec[2]=-sum;
                   result.push_back(vec);
                  
                   }                               
                   
               }
               else
                 continue;
            // } 
           }
           
       }
      return result;  
    }
};