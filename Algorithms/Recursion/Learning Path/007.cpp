#include<iostream>
using namespace std;
string printvowels(string x){
    if(x.length()==1){
        if(x[0]=='a' || x[0]=='e' || x[0]=='i' || x[0]=='o' || x[0]=='u'){
            return x;
        }else{
            return "";
        }
    }
    string tmp = printvowels(&x[1]);
    int len = 0;
    if(x[len]=='a' || x[len]=='e'||x[len]=='i'||x[len]=='o'||x[len]=='u'){
        return x[len]+tmp+x[len];
    }else{
        return tmp;
    }
}
int main(){
    string s;cin>>s;
    cout<<printvowels(s)<<'\n';
}
