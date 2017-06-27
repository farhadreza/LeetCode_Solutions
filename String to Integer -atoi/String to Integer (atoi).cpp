class Solution {
public:
    int myAtoi(string str) {
        int sign,i;
        if(str=="")
          return 0;
        for(i=0;isspace(str[i]);i++)
        ;
        sign=(str[i]=='-')?-1:1;
        
        if(str[i]=='+'||str[i]=='-')
          i++;

       long result=0;
       
       for(result=0;isdigit(str[i]);i++)
       {
            result= result*10+(str[i]-'0');
            
            if((sign*result)>= INT_MAX)
            {
                return INT_MAX;
            }
            
            if((sign*result)<= INT_MIN)
            {
                return INT_MIN;
            }
            
       }
     
       return (sign*result);
    }
};