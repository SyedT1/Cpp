ListNode *transferEvens(ListNode *&k)
{
    if (k == nullptr)
    {
        return nullptr;
    }
    else if (k->next == nullptr)
    {
        ListNode *tmp = k;
        k = nullptr;
        return tmp;
    }
    ListNode *new_list = nullptr, *p_new = nullptr, *odd_list = nullptr, *p_odd = nullptr;
    while (k != nullptr)
    {
        if (k->next == nullptr)
        {
            break;
        }
        ListNode *ult = k->next->next;
        if (new_list == nullptr)
        {
            odd_list = k->next, new_list = k;
            odd_list->next = nullptr, new_list->next = nullptr;
            p_new = new_list, p_odd = odd_list;
        }
        else
        {
            while (new_list->next != nullptr)
            {
                new_list = new_list->next;
            }
            new_list->next = k;
            while (odd_list->next != nullptr)
            {
                odd_list = odd_list->next;
            }
            if (k->next == nullptr)
            {
                break;
            }
            else
            {
                odd_list->next = k->next;
                k->next->next = nullptr;
                new_list->next->next = nullptr;
            }
        }
        k = ult;
    }
    if (k != nullptr)
    {
        while (new_list->next != nullptr)
        {
            new_list = new_list->next;
        }
        new_list->next = k;
    }
    k = p_odd;
    return p_new;
}
