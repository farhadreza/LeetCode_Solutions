public class Solution {
    public char findTheDifference(String s, String t) {
        
        int i=0;
        
        HashMap<Character, Integer> charCountMap = new HashMap<Character, Integer>();
 
        //Converting given string to char array
 
        char[] strArray = s.toCharArray();
 
        //checking each char of strArray
 
        for (char c : strArray)
        {
            if(charCountMap.containsKey(c))
            {
                //If char is present in charCountMap, incrementing it's count by 1
 
                charCountMap.put(c, charCountMap.get(c)+1);
            }
            else
            {
                //If char is not present in charCountMap,
                //putting this char to charCountMap with 1 as it's value
 
                charCountMap.put(c, 1);
            }
        }
        
        
        HashMap<Character, Integer> charCountMap2 = new HashMap<Character, Integer>();
 
        //Converting given string to char array
 
        char[] strArray2 = t.toCharArray();
 
        //checking each char of strArray
 
        for (char c : strArray2)
        {
            if(charCountMap2.containsKey(c))
            {        
 
                charCountMap2.put(c, charCountMap2.get(c)+1);
            }
            else
            {            
                charCountMap2.put(c, 1);
            }
        }
        
        for(i=0;i<t.length();i++)
        {
             if(charCountMap.get(t.charAt(i))!= charCountMap2.get(t.charAt(i)))
            {
                return t.charAt(i);
            }
        }
        return t.charAt(t.length()-1);
        
    }
}