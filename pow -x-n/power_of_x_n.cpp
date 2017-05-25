class Solution {
public:
    double myPow(double x, int n) {
       
        if(abs(x-0.0)<0.0000001) return 0.0;
        if(abs(x-1.0)<0.0000001) return 1.0;
 
        if( (n>=INT_MAX || n<=INT_MIN) && (x>1 || x<-1))
          return 0.0;
        if( (n>=INT_MAX) && (x==1 || x==-1))
          return 1.0*x;
        if( n<=INT_MIN && (x==1 || x==-1))
          return -1.0*x;
          
         
        if(n==0)
          return 1.0;
        if(n==1)
          return x;

        if(n<0)
        {
          return (double)(1.0/myPow(x,-n));
          
          //return ((double)(1.0/x))*(myPow(x,-n+1));
        }

        if(n%2==0) return myPow(x*x,n/2);
        
        return ((double)x)*myPow(x,(n-1));
        
    }
};