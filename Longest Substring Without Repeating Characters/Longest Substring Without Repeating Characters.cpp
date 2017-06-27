class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s=="") return 0;
        if(s.length()==1) return 1;
        int count;
        int max=-1;
        vector<char> str;
        
        for(int i=0;i<s.length()-1;i++)
        {
            count=1;
            int j=i;
            if(!str.empty())
               str.clear();
            while(j<s.length()-1)
            {
                str.push_back(s[j]);
                
                if((find(str.begin(), str.end(),s[j+1]))==str.end())
                {
                   count++;
                }
                else
                {
                    break;
                }
                j++;
                
            }
            if(count>max)
              max=count;
        }
        return max;
    }
};