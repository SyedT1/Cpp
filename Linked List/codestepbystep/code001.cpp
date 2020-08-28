int min(ListNode *p){
    int nums = 0;
    ListNode *k = p;
    while(p!=nullptr){
        nums++;
        p=p->next;
    }
    if(nums){
      int minimum = k->data;
      while(k!=nullptr){
        minimum=min(minimum,k->data);
        k = k->next;
      }
      return minimum;
    }else{
      throw "";   
    }
}
