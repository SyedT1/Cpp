int largestDigit(int x){
    if(x<0){
        return largestDigit(-x);
    }
    return x==0?0:max(x%10,largestDigit(x/10));
}
