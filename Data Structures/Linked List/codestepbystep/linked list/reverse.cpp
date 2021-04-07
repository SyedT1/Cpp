void reverse(ListNode *&k)
{
	if (k == nullptr || k->next == nullptr)
	{
		return;
	}
	ListNode *left = nullptr;
	for (ListNode *curr = k,*nxt = nullptr;curr != nullptr;)
	{
		nxt = curr->next;
		curr->next = left;
		left = curr;
		curr = nxt;
	}
	k = left;
}



