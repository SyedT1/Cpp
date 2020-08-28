void print(ListNode *p){
    while(p!=nullptr){
        cout<<p->data<<'\n';
        p=p->next;
    }
}
