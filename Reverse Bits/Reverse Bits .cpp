class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
    uint32_t result;
    result=n;
    uint32_t temp1;
    uint32_t temp2;
    if(n==0)
       return result;
    if(n == 4294967295)
       return n;
    for(unsigned int i=0;i<16;++i)
    {
        
        temp1 = n & (1U<<i);
        temp2=  n & (1U<<(32-i-1));

        if( (temp1 && !temp2) || (!temp1 && temp2))
        {
          
            result = result ^ (1U<<i);
            result = result ^ (1U<<(32-i-1));
        }

    }
    return result;
        
    }
};