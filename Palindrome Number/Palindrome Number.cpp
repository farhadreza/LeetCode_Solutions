class Solution {
public:
    bool isPalindrome(int x) {        
        if(x<0)
          return false;  
        int len=(int)log10(x)+1;

        for(int start=0, end=len-1; start<end; start++, end--)
        {
            if( ((int) ((x/pow(10,start))) % 10) != ((int) ((x/pow(10,end))) % 10) )
              return false;
        }
        return true;
    }
};