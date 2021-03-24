void printStars(int x){
    if(x<=0){
        return;
    }
    cout<<'*';
    printStars(x-1);
}
