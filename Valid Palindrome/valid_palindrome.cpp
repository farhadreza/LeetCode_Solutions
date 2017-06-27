class Solution {
public:
    bool isPalindrome(string s) {
    
        return palindrome_check(s,0,s.length()-1);
        
    }
    bool palindrome_check(string& s,int low,int high)
    {
        while(!isalnum(s[low]))
        {
           low++;
        }
        
         while(!isalnum(s[high]))
        {
           high--;
        }
        
        if(low>=high)
        {
            return true;
        }
        
        if(tolower(s[low])==tolower(s[high]))
        {
        
            return palindrome_check(s,low+1,high-1); 
        }
        else
          return false;
    }
};