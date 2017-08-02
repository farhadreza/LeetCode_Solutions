
string reverseVowels(string s) {
        if(s.length()<=1)
            return s;
        vector<char> vec {'a','e','i','o','u','A','E','I','O','U'};
        for(int i=0, j=s.length()-1;i<j;){
            if(find(vec.begin(),vec.end(),s[i]) ==vec.end()){
                i++;              
            }
            if(find(vec.begin(),vec.end(),s[j]) ==vec.end()){
                j--;
               
            }
            if(find(vec.begin(),vec.end(),s[i]) !=vec.end()){
                if(find(vec.begin(),vec.end(),s[j]) !=vec.end()){
                    swap(s[i],s[j]);
                    i++;
                    j--;
                }
                else
                    j--;
            }
            
        }
        return s;
}
