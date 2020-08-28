bool isSorted(ListNode *p){   
   ListNode *sp = p;
   int el = 0;
   while(sp!=nullptr){
     el++;
     sp=sp->next;
   }
   if(el<2)return true;
   while(true){
       int pi = p->data,qi = p->next->data;
       if(!(pi<=qi)){
           return false;
       }
       p = p->next;
       if(p->next==nullptr){
          return true;   
       }
   }
}
