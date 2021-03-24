int evenDigits(int x){
    return x==0?x:((x%10)%2==0?evenDigits(x/10)*10+(x%10):evenDigits(x/10));
}
