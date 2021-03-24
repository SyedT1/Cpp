void stutterStack(Stack<int>&k){
    if(k.size()==0){
        return;
    }
    int t = k.peek();
    k.pop();
    stutterStack(k);
    k.push(t);
    k.push(t);
}
