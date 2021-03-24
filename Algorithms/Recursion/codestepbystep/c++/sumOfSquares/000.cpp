int sumOfSquares(int x){
    if(x<0){
        throw x;
    }else if(x==0){
        return x;
    }else{
        return x*x + sumOfSquares(x-1);
    }
}
