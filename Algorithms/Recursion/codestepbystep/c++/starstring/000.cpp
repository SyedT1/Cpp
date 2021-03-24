string starString(int x){
    if(x<0){
        throw x;
    }
    else if(x==0){
        return "*";
    }
    string s = starString(x-1);
    s = s+s;
    return s;
}
