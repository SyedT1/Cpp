int countDuplicates(Stack<int> &lo)
{
    if (lo.isEmpty())
    {
        return 0;
    }
    int n = lo.pop();
    int f = countDuplicates(lo);
    if (lo.size() == 0)
    {
        lo.push(n);
        return f;
    }
    else
    {
        if (lo.peek() == n)
        {
            lo.push(n);
            return f + 1;
        }
        else
        {
            lo.push(n);
            return f;
        }
    }
}
