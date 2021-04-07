void push_back(ListNode *&m, ListNode *&l)
{
	if (m->next == nullptr || m->next->data >= l->data)
	{
		l->next = m->next;
		m->next = l;
		return;
	}
	push_back(m->next, l);
}
void adjoin(ListNode *&A, ListNode *&B)
{
	if (A->data >= B->data)
	{
		B->next = A;
		A = B;
		return;
	}
	push_back(A, B);
}
ListNode *merge(ListNode *&k, ListNode *l)
{
	if (k == nullptr)
	{
		return l;
	}
	if (l == nullptr)
	{
		return k;
	}
	ListNode *mix = merge(k, l->next);
	adjoin(mix, l);
	return mix;
}
