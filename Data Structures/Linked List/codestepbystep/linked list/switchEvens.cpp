void switchEvens(ListNode *&list1, ListNode *&list2)
{
    if (list1 == nullptr || list2 == nullptr)
    {
        return;
    }
    for (ListNode *f = list1, *s = list2; true;)
    {
        if (f->data % 2 == 0 && s->data % 2 == 0)
        {
            swap(f->data, s->data);
        }
        f = f->next;
        s = s->next;
        if (f == nullptr || s == nullptr)
        {
            break;
        }
    }
}

