void Helper(ListNode *&left, ListNode *&right)
{
	if (left->next == nullptr)
	{
		left->next = right;
		right->next = nullptr;
		return;
	}
	Helper(left->next, right);
}
void split(ListNode *&k)
{
	ListNode *neg = nullptr;
	while (k != nullptr && k->data < 0)
	{
		ListNode *tempo = k->next;
		if (!neg)
		{
			neg = k;
			neg->next = nullptr;
		}
		else
		{
			Helper(neg, k);
		}
		k = tempo;
	}
	if (k == nullptr)
	{
		ListNode *pr = nullptr, *cu = neg, *nxt = nullptr;
		while (cu != nullptr)
		{
			nxt = cu->next;
			cu->next = pr;
			pr = cu;
			cu = nxt;
		}
		neg = pr;
		k = neg;
		return;
	}
	ListNode *notun = k;
	while (notun->next != nullptr)
	{
		if (notun->next->data < 0)
		{
			ListNode *flow = notun->next->next, *mid = notun->next;
			notun->next = flow;
			if (neg == nullptr)
			{
				neg = mid;
				mid->next = nullptr;
			}
			else
				Helper(neg, mid);
		}
		else
		{
			notun = notun->next;
		}
	}
	if (neg != nullptr)
	{
		ListNode *pr = nullptr, *cu = neg, *nxt = nullptr;
		while (cu != nullptr)
		{
			nxt = cu->next;
			cu->next = pr;
			pr = cu;
			cu = nxt;
		}
		neg = pr;
		ListNode *t = neg;
		while (t->next != nullptr)
		{
			t = t->next;
		}
		t->next = k;
		k = neg;
	}
}
