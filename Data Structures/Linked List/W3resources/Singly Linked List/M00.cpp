#include<iostream>
#include<algorithm>
using namespace std;
class Node{
public:
    int value;
    Node *next = nullptr;
    void ins(Node *&k,int v){
        Node *temp = new Node{v,k};
        k = temp;
    }
    void dis(Node *k){
        if(k==nullptr){
            return;
        }
        cout<<k->value<<' ';
        dis(k->next);
    }
};
void swapN(Node *&l,int le,int r){
  if(l==nullptr){
      cout<<"Empty it is \n";
      return;
  }
   if(l->value==le || l->value==r){
       Node *right_to_n = l->next,*left_to_right = nullptr, *right_to_right = nullptr, *right = nullptr;
       for(Node *y = l;y->next!=nullptr;y=y->next){
           if(y->next->value==le || y->next->value ==r){
               right = y->next;
               left_to_right = y;
               right_to_right = y->next->next;
               break;
           }
       }
       right->next = l->next;
       l->next = right_to_right;
       left_to_right->next = l;
       l = right;
       return;
   }
    Node *left = nullptr,*left_to_left = nullptr,*right_to_left=nullptr,*left_to_right = nullptr, *right_to_right = nullptr, *right = nullptr;
    for(Node *L = l;L->next!=nullptr;L=L->next){
        if(L->next->value==le || L->next->value==r){
            if(left==nullptr){
                left = L->next;
                left_to_left = L;
                right_to_left = left->next;
            }else{
                right = L->next;
                left_to_right = L;
                right_to_right = right->next;
            }
        }
    }
    if(right==right_to_left){
        left_to_left->next = right_to_left;
        right_to_left->next = left;
        left->next = right_to_right;
        return;
    }else{
        left_to_left->next = right;
        right->next = right_to_left;
        left_to_right->next = left;
        left->next = right_to_right;
        return;
    }
        
}
int main(){
    Node *l = nullptr;
    int Ar[]={10,15,13,12,20,14};
    reverse(Ar,Ar+(sizeof(Ar)/sizeof(int)));
    for(int i:Ar){
        l->ins(l,i);
    }
    l->dis(l);
    cout<<'\n';
    swapN(l,15,13);
    l->dis(l);
    return 0;
}
