class Solution {
public:
    int titleToNumber(string s) {
        
    int sum=0;
    
    for(int i=0; i<s.length(); i++)
    {
        sum+= ((int) pow (26.0,(double)i)) * (s[s.length()-i - 1] - 'A' + 1);
    }
    
    return sum;
        
    }
};