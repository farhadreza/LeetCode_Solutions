class Solution {
public:
    string addBinary(string a, string b) {
        
        int prev_carry=0, curr_carry=0;
     
        int len=a.length()>b.length()?a.length():b.length();
        
        string result="";

        
        int adigit, bdigit;
        for(int i=a.length()-1, j=b.length()-1;i>=0 || j>=0 || curr_carry==1;i--, j--)
        {
            adigit=0;
            bdigit=0;
            
            if(i>=0)
               adigit= a[i]=='1';
            if(j>=0)
               bdigit= b[j]=='1';
            result= static_cast<char>(adigit ^ bdigit^ curr_carry+'0')+result;
            curr_carry= ((adigit+bdigit+curr_carry)>=2);

        }
        return result;
    }
};