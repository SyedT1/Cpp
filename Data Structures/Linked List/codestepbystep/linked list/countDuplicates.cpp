int countDuplicates(ListNode *p)
{
	int sm = 0;
	if (p == nullptr || p->next == nullptr)
	{
		return sm;
	}
	ListNode *prev = nullptr;
	while (p != nullptr)
	{
		if (prev != nullptr)
		{
			if (p->data == prev->data)
			{
				sm++;
			}
		}
		prev = p, p = p->next;
	}
	return sm;
}







