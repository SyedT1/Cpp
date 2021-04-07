void adjoin(ListNode *&perm, ListNode *tmp)
{
	if (perm->next == nullptr)
	{
		perm->next = tmp;
		return;
	}
	adjoin(perm->next, tmp);
}
ListNode *reverse(ListNode *l)
{
	if (l == nullptr)
	{
		return l;
	}
	ListNode *rev = reverse(l->next);
	if (rev == nullptr)
	{
		return l;
	}
	else
	{
		l->next = nullptr;
		adjoin(rev, l);
		return rev;
	}
}
