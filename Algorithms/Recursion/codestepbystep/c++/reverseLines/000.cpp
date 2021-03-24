void reverseLines(ifstream& p){
    if(!p.good()){
        return;
    }
    string k;getline(p,k);
    reverseLines(p);
    cout<<k<<'\n';
}
