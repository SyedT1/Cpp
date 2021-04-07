string toString(ListNode *l){
    if(l==nullptr){
        return "{}";
    }
    string store = "{";
    store+=to_string(l->data);
    l = l->next;
    while(l!=nullptr){
        store += ", ";
        store += to_string(l->data);
        l = l->next;
    }
    store += "}";
    return store;
}
