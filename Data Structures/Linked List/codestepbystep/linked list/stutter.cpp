void stutter(ListNode *&k)
{
    if(k==nullptr){
        return;
    }
	ListNode *curr = k, *nxt = nullptr, *list = nullptr;
	while (curr != nullptr)
	{
		nxt = curr->next;
		ListNode *temp = new ListNode{curr->data, nullptr};
		curr->next = temp;
		if (list == nullptr)
		{
			list = curr;
		}
		else
		{
			temp = curr;
			ListNode *fetch = list;
			for (; fetch->next != nullptr;)
			{
				fetch = fetch->next;
			}
			fetch->next = temp;
		}
		curr = nxt;
	}
	k = list;
}

