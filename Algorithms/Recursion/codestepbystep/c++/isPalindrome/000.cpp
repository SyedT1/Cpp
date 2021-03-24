bool isPalindrome(string x){
    if(x.length()<2){
        return true;
    }
    else if(x.length()==2){
       char l = x[0],r = x[1];
       if(l>='A' && l<='Z')l = char(l+32);
       if(r>='A' && r<='Z')r = char(r+32);
       return l==r;
    }
    char l = x[0], r = x[x.length()-1];
     if(l>='A' && l<='Z')l = char(l+32);
     if(r>='A' && r<='Z')r = char(r+32);
     x[x.length()-1] = '\0';
     bool mark = isPalindrome(&x[1]);
     if(mark==false){
         return false;
     }else{
         return l==r;
     }
}
