#include<iostream>
using namespace std;
class Node{
  public:
    int value;
    Node *next = nullptr;
    void ins(Node *&k,int v){
        if(!k){
            k = new Node{v,nullptr};
            return;
        }
        else if(next==nullptr){
            next = new Node{v,nullptr};
            return;
        }
        next->ins(k,v);
    }
    void dis(Node *k){
        if(k==nullptr){
            return;
        }
        cout<<k->value<<' ';
        dis(k->next);
    }
};
void pairswap(Node *&x){
    if(x==nullptr || x->next==nullptr){
        return;
    }
    swap(x->value,x->next->value);
    pairswap(x->next->next);
    //return;
}
int main(){
   Node *l = nullptr;
   int A[]={1,2,3,4,5,6};
   for(int i:A){
       l->ins(l,i);
   }
   l->dis(l);
   cout<<'\n';
   pairswap(l);
   l->dis(l);
}
