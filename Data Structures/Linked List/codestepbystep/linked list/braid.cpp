void Helper(ListNode *a, ListNode *&reach)
{
	if (a == nullptr)
	{
		return;
	}
	Helper(a->next, reach);
	ListNode *tmp = reach->next, *leg = new ListNode{a->data, nullptr};
	reach->next = leg;
	leg->next = tmp;
	reach = tmp;
}
void braid(ListNode *&k)
{
	if (k == nullptr || k->next == nullptr)
	{
		if (k == nullptr)
		{
			return;
		}
		else
		{
			k->next = new ListNode{k->data, nullptr};
			return;
		}
	}
	ListNode *start = k;
	Helper(k, start);
}
