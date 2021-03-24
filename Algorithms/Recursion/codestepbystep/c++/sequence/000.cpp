string Helper(int l){
   if(l==1){
       return to_string(l);
   }
   string attach = Helper(l-1);
   if(l%2==0){
       return "("+to_string(l)+" + "+attach+")";
   }
   else{
       return "("+attach+" + "+to_string(l)+")";
   }
}
void sequence(int x){
    if(x<=0){
        throw x;
    }
    else cout<<Helper(x);
}
