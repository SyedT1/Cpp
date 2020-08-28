int getValue(ListNode *p,int x){
   int s = 0;
   while(p!=nullptr){
      if(s==x){
          return p->data;
      }
       p = p->next;
       s++;
   }
   return -1;
}
