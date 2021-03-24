int power(int x,int pow){
    if(pow<0){
        throw pow;
    }else if(pow==0){
        return 1;
    }
    int junc = power(x*x,pow/2);
    return (pow%2)*junc*x+(junc*(pow%2==0));
}
