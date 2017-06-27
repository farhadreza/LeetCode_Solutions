class Solution {
public:
    int hammingWeight(uint32_t n) {
    char binary[]="00000000000000000000000000000000";
    
    for(int pos=31;pos>=0;pos--)
    {
        if(n%2)
           binary[pos]='1';
        n= (n/2);
    }
    string str(binary);
    
    size_t n2= std::count(str.begin(), str.end(),'1');
   
    return (int) n2;
        
    }
};