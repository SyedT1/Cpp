#include<iostream>
#include<stack>
using namespace std;
void __rem(stack<int>&sos){
    if(sos.empty()){
        return;
    }
    int n = sos.top();
    sos.pop();
    __rem(sos);
    if(n%2){
        sos.push(n);
    }
}
int main(){
    stack<int>num;
    for(int i = 10;i>0;i--){
        num.push(i);
    }
    __rem(num);
    while(!num.empty()){
        cout<<num.top()<<' ';
        num.pop();
    }
}
