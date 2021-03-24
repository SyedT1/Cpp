string replaceAll(string s,char c,char rep){
    if(s.length()==0){
        return "";
    }else if(s.length()==1){
        if(s[0]==c){
            return string(1,rep);
        }else{
            return s;
        }
    }
    char l = s[0];
    string repair = replaceAll(&s[1],c,rep);
    if(l==c){
        l = rep;
    }
    return l+repair;
}
