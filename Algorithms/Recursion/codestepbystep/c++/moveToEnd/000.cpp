string moveToEnd(string x,char c){
    if(x.length()==0){
        return "";
    }else if(x.length()==1){
        char tmp = x[0];
        if(x[0]>='A' && x[0]<='Z'){
            tmp=char(x[0]+32);
        }
        if(tmp==c || x[0]==c){
            return string(1,tmp-32);
        }
        return x;
    }
    char tmp = x[0];
    char l = (x[0]>='A' && x[0]<='Z'?32:0)+x[0];
    string rep = moveToEnd(&x[1],c);
    if(l==c){
        l = char(l-32);
        return rep+l;
    }else{
        return tmp+rep;
    }
}
