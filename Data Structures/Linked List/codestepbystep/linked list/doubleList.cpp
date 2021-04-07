void Helper(ListNode *d, ListNode *&s, int x)
{
	if (x == 0)
	{
		return;
	}
	while (s->next != nullptr)
	{
		s = s->next;
	}
	s->next = new ListNode{d->data, nullptr};
	Helper(d->next, s, x - 1);
}
void doubleList(ListNode *&m)
{
	if (m == nullptr)
	{
		return;
	}
	else
	{
		int List_s = 1;
		ListNode *k = m;
		while (k->next != nullptr)
		{
			k = k->next;
			List_s++;
		}
		Helper(m, k, List_s);
	}
}




