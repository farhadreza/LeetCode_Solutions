class Solution {
public:
    int trailingZeroes(int n) {
        
    if(n==0)
       return 0;
    int zero_c=0;
    while(n>=1)
    {
        zero_c+= (int) (n/5);
        
        n/=5;
        
    }
    return zero_c;
        
    }
};