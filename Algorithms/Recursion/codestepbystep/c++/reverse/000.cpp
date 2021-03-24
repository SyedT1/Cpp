string reverse(string x){
    if(int(x.size()<=1)){
        return x;
    }
    string s = &x[1];
    return reverse(s) + x[0];
}
