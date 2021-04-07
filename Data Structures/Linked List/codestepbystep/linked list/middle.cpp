int middle(ListNode *k){
    if(k==nullptr){
        throw "";
    }
    int n = 0,tot = 0;
    ListNode *s = k;
    while(s!=nullptr){
        tot++;
        s = s->next;
    }
    while(k!=nullptr){
        if(n==tot/2){
          return k->data;   
        }
        k = k->next;
        n++;
    }
    return -1;
}
