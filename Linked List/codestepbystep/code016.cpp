bool contains(ListNode *p,int n){
    while(p!=nullptr){
       if(p->data==n){
          return true;   
       }
       p = p->next;
    }
    return false;
}
