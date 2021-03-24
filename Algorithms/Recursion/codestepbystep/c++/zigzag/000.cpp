void zigzag(int x){
    if(x<=0){
       throw x;
    }
    else if(x<=2){
        cout<<string(x,'*');
        return;
    }
    cout<<'<';
    zigzag(x-2);
    cout<<'>';
}
