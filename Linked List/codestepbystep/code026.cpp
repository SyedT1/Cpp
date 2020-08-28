int middle(ListNode *k){
    int n = 0,el = 0;
    ListNode *s = k;
    while(s!=nullptr){
        el++;
        s = s->next;
    }
    if(el==0) throw  "";
    while(k!=nullptr){
        if(n==el/2){
          return k->data;   
        }
        k = k->next;
        n++;
    }
    return -1;
}
