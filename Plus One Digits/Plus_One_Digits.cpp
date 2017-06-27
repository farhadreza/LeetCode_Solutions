class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      vector<int> result;
      bool carry=true;
      int temp;
      
      
      for(int i=digits.size()-1;i>=0 && carry;i--)
      {
          temp=digits[i]+1;
          digits[i]=(digits[i]+1)%10;
         
          carry= (temp%10)==0;
         
      }
      if(carry)
         digits.insert(digits.begin(),1);
       
      return digits;
    }
};