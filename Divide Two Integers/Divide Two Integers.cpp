class Solution {
public:
    int divide(int dividend, int divisor) {
        
        int sign;
        long result=0;
        sign= (dividend<0 ^ divisor<0)?-1:1;
        
        long a=labs(dividend);
        long b=labs(divisor);
        
        if(b==0 || (dividend<=INT_MIN && divisor==-1))
          return INT_MAX;
        
        else if(b==1)
          return sign*a;
        
        int i;
        while(a>=b)
        {
            i=0;
            
            while(a>= (b<<i))
            {
            a= a- (b<<i);
            result+= 1<<i;
            i++;
            }
        }
        
        return sign*result;
        
    }
};