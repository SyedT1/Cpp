#include<iostream>
using namespace std;
class Node{
  public:
     int value;
     Node *next = nullptr;
     void ins(Node *&k,int v){
         Node *tmp = new Node{v,k};
         k = tmp;
         return;
     }
     void dis(Node *k){
         if(!k){
             return;
         }
         cout<<k->value<<' ';
         dis(k->next);
     }
};
int main(){
    Node *l = nullptr;
    int A[]={5,4,3,2,1};
    for(int i:A){
      l->ins(l,i);
    }
    l->dis(l);
    cout<<'\n';
    if(l==nullptr){
        cout<<"Null \n";
        return 0;
    }
    for(Node *L = l;L->next!=nullptr;){
        swap(L->value,L->next->value);
        if(L->next->next!=nullptr){
            L = L->next->next;
        }else{
            break;
        }
    }
    for(Node *L = l;L;L=L->next){
        cout<<L->value<<' ';
    }
    //Ret0:
    return 0;
}
