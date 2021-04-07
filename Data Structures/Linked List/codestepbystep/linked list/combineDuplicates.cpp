void combineDuplicates(ListNode *&k)
{
	if (k == nullptr || k->next == nullptr)
	{
		return;
	}
	ListNode *p = nullptr, *track_p = nullptr;
	while (k != nullptr)
	{
		ListNode *focal = nullptr, *nxt = nullptr;
		int Fish = 0;
		while (k->next != nullptr && (k->data == k->next->data))
		{
			Fish++;
			focal = k;
			k = k->next;
		}
		if (Fish > 0)
		{
			nxt = k->next;
			Fish++;
			if (p == nullptr)
			{
				p = focal;
				p->data = focal->data * Fish;
				p->next = nullptr;
				track_p = p;
			}
			else
			{
				while (p->next != nullptr)
				{
					p = p->next;
				}
				p->next = focal;
				focal->data = focal->data * Fish;
				focal->next = nullptr;
			}
		}
		else
		{
			if (p == nullptr)
			{

				p = k;
				track_p = p;
				nxt = k->next;
				p->next = nullptr;
			}
			else
			{
				while (p->next != nullptr)
				{
					p = p->next;
				}
				p->next = k;
				nxt = k->next;
				p->next->next = nullptr;
			}
		}
		k = (nxt ? nxt : k->next);
	}
	k = track_p;
}
