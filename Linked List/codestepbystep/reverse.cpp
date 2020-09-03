void reverse(ListNode *&p){
   ListNode *prev = nullptr, *curr = p, *nxt;
   while(curr!=nullptr){
     nxt = curr->next;
     curr->next = prev;
     prev = curr;
     curr = nxt;
   }
   p = prev;
}
