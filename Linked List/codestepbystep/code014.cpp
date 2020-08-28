int size(ListNode *p){
    int s = 0;
    while(p!=nullptr){
        s++;
        p=p->next;
    }
    return s;
}
