class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
           if(strs.empty()) return "";
           string str1=strs[0];
           if(str1=="")
               return str1;
           
           int index;
           
           for(int i=1;i<strs.size();i++)
           {
             string str2=strs[i];
             if(str2=="")
               return str2;             
             index=0;
             
             while(str1[index]==str2[index])
               index++;
             
             str1= str1.substr(0,index);
       
           }

        return str1;
    }
};