int deleteBack(ListNode *&p){
    if(p==nullptr) throw " ";
    else{
      int dat;
      if(p->next==nullptr){
         dat = p->data;
         delete p;
         p=nullptr;   
      }else{
        ListNode *q = p, *r;
        while(p->next!=nullptr){
          r = p;
          p = p->next;           
        }
        dat = p->data;
        delete p;
        r->next = nullptr;
        p = q;
      }
        return dat;
    }
}
