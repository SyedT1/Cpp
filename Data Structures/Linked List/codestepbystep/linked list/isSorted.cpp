bool isSorted(ListNode *p)
{
	if (p==nullptr || p->next == nullptr)
	{
		return true;
	}
	ListNode *prev = nullptr;
	while (p != nullptr)
	{
		if (prev != nullptr)
		{
			if (p->data < prev->data)
			{
				return false;
			}
		}
		prev = p, p = p->next;
	}
	return true;
}


