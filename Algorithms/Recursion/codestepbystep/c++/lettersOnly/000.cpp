string lettersOnly(string x){
    if(x.length()==0){
        return "";
    }else if(x.length()==1){
        bool cap = (x[0]>='A' && x[0]<='Z');
        bool low = (x[0]>='a' && x[0]<='z');
        if(cap || low){
            return x;
        }else{
            return "";
        }
    }
    char l = x[0];
    string rep = lettersOnly(&x[1]);
    if((l>='A' && l<='Z')||(l>='a' && l<='z')){
        return l+rep;
    }else{
        return rep;
    }
}
