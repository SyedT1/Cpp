void destroy(ListNode *&n, int &o)
{
	if (n == nullptr)
	{
		return;
	}
	destroy(n->next, o);
	if (n->next != nullptr)
	{
		if (o > 0)
		{
			ListNode *tmp = n->next;
			n->next = nullptr;
			delete tmp;
		}
		o--;
	}
}
void chopBothSides(ListNode *&a, int k)
{
	if (k <= 0 || a == nullptr)
	{
		return;
	}
	int nums = 0;
	for (ListNode *l = a; l != nullptr; l = l->next)
	{
		nums++;
	}
	if (2*k > nums)
	{
		throw nums;
		return;
	}
	int l_s = k;
	for (ListNode *l = a; l != nullptr;)
	{
		ListNode *tmp = l;
		l = l->next;
		delete tmp;
		l_s--;
		if (l_s == 0)
		{
			a = l;
			break;
		}
	}
	destroy(a, k);
	if (k == 1)
	{
		ListNode *tm = a;
		a = nullptr;
		delete tm;
	}
}






