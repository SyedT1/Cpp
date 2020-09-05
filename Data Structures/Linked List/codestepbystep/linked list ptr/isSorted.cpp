bool isSorted(ListNode *p){
  if(p==nullptr){
    return true;   
  }
  while(p->next!=nullptr){
    if((p->data)>(p->next->data))return false;
    p = p->next;
  }
  return true;
}
