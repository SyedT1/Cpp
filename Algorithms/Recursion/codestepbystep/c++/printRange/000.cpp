void mood(int l,int r,char c){
    if(l==r){
        cout<<l;
        return;
    }
    cout<<l<<' '<<c<<' ';
    mood(l+1,r,c);
}
void printRange(int x,int y){
    if(x>y)throw x;
    if(x==y){
        cout<<x<<'\n';
        return;
    }
    string s = ((x+y)/2.0 == (x+y)/2 ? "<" : "--");
    int mid = (x+y)/2;
    mood(x,mid,'>');
    cout<<" "<<s<<" ";
    mood(mid+1,y,'<');
}
