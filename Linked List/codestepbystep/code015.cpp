bool isEmpty(ListNode *p){
    int el = 0;
    while(p!=nullptr){
        el++;
        p = p->next;
    }
    return el?false:true;
}
 
