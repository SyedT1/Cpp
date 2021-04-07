ListNode *intersection(ListNode *k, ListNode *l)
{
    if(k==nullptr || l==nullptr)return nullptr;
	for (ListNode *f = k; f != nullptr; f = f->next)
	{
		for (ListNode *s = l; s != nullptr; s = s->next)
		{
			if (f->data == s->data)
			{
				return f;
			}
		}
	}
	return nullptr;
}
