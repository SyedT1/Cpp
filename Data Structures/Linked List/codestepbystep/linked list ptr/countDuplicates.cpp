int countDuplicates(ListNode *k){
    int dup = 0,ls = 0,el = 0;
    ListNode *pass = k;
    while(pass!=nullptr){
        el++;
        pass = pass->next;
    }
    if(el<=1){
       return 0;   
    }
    while(true){
         int pi = k->data,qi = k->next->data;
         if(pi==qi){
            ls++;   
         }else{
            dup+=ls;
            ls = 0;
         }
         k = k->next;
         if(k->next==nullptr){
            break;   
         }
    }
    if(ls){
      dup+=ls;   
    }
    return dup;
}
