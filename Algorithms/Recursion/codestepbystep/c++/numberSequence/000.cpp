void numberSequence(int x)
{
    if (x < 0)
    {
        throw x;
    }
    if (x % 2 == 0)
    {
        if (x == 0)
        {
            throw x;
        }
        if (x / 2 == 0)
        {
            return;
        }
        cout << (x / 2) << ' ';
        if (x - 2 == 0)
        {
            cout << 1 << ' ';
            return;
        }
        numberSequence(x - 2);
        cout << (x / 2) << ' ';
    }
    else
    {
        if (x / 2 == 0)
        {
            cout << 1 << ' ';
            return;
        }
        cout << (x & 1 ? (x + 1) / 2 : (x / 2)) << ' ';
        numberSequence(x - 2);
        cout << (x & 1 ? (x + 1) / 2 : (x / 2)) << ' ';
    }
}
