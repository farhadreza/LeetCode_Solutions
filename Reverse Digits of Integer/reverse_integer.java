public class Solution {
    public int reverse(int x) {
        
        int reverse_num=0;
        int sign=1;
        if(x < 0)
             sign = -1;
        x = Math.abs(x);
        while(x!=0)
        {
           if (reverse_num!=0 && Integer.MAX_VALUE / reverse_num < 10
                   && Integer.MAX_VALUE / reverse_num > -10)
               return 0;
              
            reverse_num=reverse_num*10+x%10;
            
            
            
            x=x/10;
        }
        
        reverse_num=reverse_num*sign;
        
        return reverse_num;
    }
}