string collapseSequences(string x,char c)
{
    if(x.length()<1){
        return x;
    }
    if (x.length() == 1)
    {
        return x;
    }
    // aaaaaajjam
    // m 
    char l = x[0];
    string ans = collapseSequences(&x[1],c);
    if(l==ans[0] && l==c){
        return ans;
    }else{
        return l+ans;
    }
}





