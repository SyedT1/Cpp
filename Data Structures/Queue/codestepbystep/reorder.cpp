void reorder(Queue<int> &p)
{
    if (p.size() <= 1)
    {
        return;
    }
    while (true)
    {
        bool sorted = true;
        Queue<int> hover, fade;
        int dream = 0;
        while (!p.isEmpty())
        {
            int deq = p.dequeue();
            if (hover.size() == 0)
            {
                hover.enqueue(deq);
            }
            else
            {
                if (deq < dream)
                {
                    sorted = false;
                    int left = deq;
                    int right = dream;
                    Queue<int> focal;
                    for (int i = 1, hs = hover.size(); i < hs; i++)
                    {
                        focal.enqueue(hover.dequeue());
                    }
                    focal.enqueue(left);
                    focal.enqueue(right);
                    while (!p.isEmpty())
                    {
                        focal.enqueue(p.dequeue());
                    }
                    p = focal;
                    break;
                }
                else
                {
                    hover.enqueue(deq);
                }
            }
            dream = deq;
        }
        if (sorted)
        {
            while (!hover.isEmpty())
            {
                p.enqueue(hover.dequeue());
            }
            break;
        }
    }
}
