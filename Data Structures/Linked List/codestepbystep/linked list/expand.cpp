void expand(ListNode *&k, int n)
{
    if (k ==nullptr)
    {
        return;
    }
    if (n == 0)
    {
        while (k != nullptr)
        {
            ListNode *tmp = k->next, *l = k;
            delete l;
            k = tmp;
        }
        return;
    }
    else if (n < 0)
    {
        throw n;
        return;
    }
    ListNode *tap = nullptr, *r = nullptr;
    while (k != nullptr)
    {
       // cout << k->data << ' ';
        ListNode *tmp = k->next, *f = k;
        if (tap == nullptr)
        {
            int temp_f = f->data / n;
            for (int i = 1; i <= n; i++)
            {
                if (tap == nullptr)
                {
                    tap = new ListNode{temp_f, nullptr};
                    r = tap;
                }
                else
                {
                    while (tap->next != nullptr)
                    {
                        tap = tap->next;
                    }
                    tap->next = new ListNode{temp_f, nullptr};
                }
                f->data -= temp_f;
                if (f->data < 0)
                {
                    temp_f = 0;
                }
            }
        }
        else
        {
            bool fil = false;
            int temp_f = f->data / n;
            if(temp_f < 0){
                fil = true;
            }
            for (int i = 1; i <= n; i++)
            {
                while (tap->next != nullptr)
                {
                    tap = tap->next;
                }
                tap->next = new ListNode{temp_f, nullptr};
                if(fil==true)f->data += abs(temp_f);
                if (f->data < 0 && fil==false)
                {
                    temp_f = 0;
                }else if(f->data > 0 && fil==true){
                    temp_f = 0;
                }
            }
        }
        delete f;
        k = tmp;
    }
    k = r;
}
