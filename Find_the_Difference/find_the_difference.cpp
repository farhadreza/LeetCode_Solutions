class Solution {
public:
    char findTheDifference(string s, string t) {
        int i=0;
        map<char, int> charCountMap;
        std::map<char,int>::iterator it;

        //Converting given string to char array        
        char strArray[s.size()+1];//as 1 char space for null is also required
        strcpy(strArray, s.c_str());
 
        //checking each char of strArray
        for (char& c : s)
        {
            it = charCountMap.find(c);
            if (it != charCountMap.end())
            {
               //If char is present in charCountMap, incrementing it's count by 1
               it->second = charCountMap[c]+1;
            }
            else
            {
              //If char is not present in charCountMap,
              //putting this char to charCountMap with 1 as it's value
              charCountMap.insert(pair<char, int>(c,1));
            }
        }
        
        
        map<char, int> charCountMap2;
        std::map<char,int>::iterator it2; 
        //Converting given string to char array
        char strArray2[t.size()+1];//as 1 char space for null is also required
        strcpy(strArray2, t.c_str());
 
        //checking each char of strArray
        for (char& c : t)
        {
            it2 = charCountMap2.find(c);
            if (it2 != charCountMap2.end())
            {
             //If char is present in charCountMap, incrementing it's count by 1
             // charCountMap2.insert(pair<char, int>(c,charCountMap2[c]+1));
             it2->second = charCountMap2[c]+1;
            }
            else
            {
                //If char is not present in charCountMap,
                //putting this char to charCountMap with 1 as it's value
                charCountMap2.insert(pair<char, int>(c,1));
            }
        }
        
        for(i=0;i<t.length();i++)
        {
           if(charCountMap[t[i]]!= charCountMap2[t[i]])
            {
               // return t.charAt(i);
                return t[i];
            }
        }
       // return t.charAt(t.length()-1);
        return t[t.length()-1];
        
    }
};