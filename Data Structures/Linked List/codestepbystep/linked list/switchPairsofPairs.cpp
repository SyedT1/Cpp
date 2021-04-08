void switchPairsOfPairs(ListNode *&k)
{
    if (k == nullptr || k->next == nullptr || k->next->next==nullptr || k->next->next->next==nullptr)
    {
        return;
    }
    int i = 0;
    ListNode *p = nullptr, *track_p = nullptr, *initial = nullptr, *final = nullptr;
    while (k != nullptr)
    {
        i++;
        bool ends = false;
        ListNode *nxt = nullptr;
        if (i % 4 == 1)
        {
            initial = k;
        }
        else if (i % 4 == 0)
        {
            //cout<<initial->data<<' '<<initial->next->data<<' '<<initial->next->next->data<<' '<<initial->next->next->next->data<<'\n';
            final = k;
            nxt = k->next;
            if (nxt == nullptr)
            {
                ends = true;
            }
            if (nxt == nullptr)
            {
                ends = true;
            }
            if (p == nullptr)
            {
                ListNode *Soul = initial->next->next;
                initial->next->next = nullptr;
                p = Soul;
                track_p = p;
                final->next = initial;
            }
            else
            {
                while (p->next != nullptr)
                {
                    p = p->next;
                }
                ListNode *Soul = initial->next->next;
                initial->next->next = nullptr;
                p->next = Soul;
                final->next = initial;
            }
        }
        if(ends){
            initial = nullptr, final = nullptr;
            break;
        }
        k = (nxt ? nxt : k->next);
        if (nxt)
        {
            initial = nullptr, final = nullptr;
        }
    }
    if (p)
    {
        k = track_p;
    }
    if (track_p != nullptr && initial != nullptr)
    {
        ListNode *fer = track_p;
        while (fer->next != nullptr)
        {
            fer = fer->next;
        }
        fer->next = initial;
    }
}
