class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
   int s_len=0;
   int new_count=0;
   
   for(count=0; s[s_len]!='\0';s_len++)
   {
       
      if(s[s_len]==' ')
      {
         continue;
      }
       
       if(s[s_len]!=' ' && s[s_len-1]==' ')
       {
           count=0;
       }
      
         count++;
   }
   return count;
    }
};