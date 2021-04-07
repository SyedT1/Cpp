void removeAllThreshold(ListNodeDouble *&k, double from, double to)
{
	if (k == nullptr)
	{
		return;
	}
	double left = to - from, right = from + to;
	while (k != nullptr && (k->data >= left && k->data <= right))
	{
		ListNodeDouble *temp = k, *lift = k->next;
		delete temp;
		k = lift;
	}
	if (k == nullptr)
	{
		return;
	}
	else
	{
		ListNodeDouble *r = k;
		while (r->next != nullptr)
		{
			if (r->next->data >= left && r->next->data <= right)
			{
				ListNodeDouble *flow = r->next;
				r->next = r->next->next;
				delete flow;
			}
			else
			{
				r = r->next;
			}
		}
	}
}
