bool judgeSquareSum(int c) {
        if(c<0) return false;
        long low=0, high=sqrt(c);
        while(low<=high){
            long mid= (low*low+high*high);            
            if(mid==c) return true;  
            else if(mid>c)high=high-1;
            else low=low+1;            
        }
        return false;    
}