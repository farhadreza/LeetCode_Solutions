int romanToInt(string s) {
        int num=0;
        if(s.find("IV",0)!= string::npos) num-=2;
        if(s.find("IX",0)!= string::npos) num-=2;
        if(s.find("XL",0)!=string::npos) num-=20;
        if(s.find("XC",0)!=string::npos) num-=20;
        if(s.find("CD",0)!=string::npos) num-=200;
        if(s.find("CM",0)!=string::npos) num-=200;

        for(char c:s){
            if(c=='M')num+=1000;
            if(c=='D')num+=500;
            if(c=='C')num+=100;
            if(c=='L')num+=50;
            if(c=='X')num+=10;
            if(c=='V')num+=5;
            if(c=='I')num+=1;            
        }
        return num;
}