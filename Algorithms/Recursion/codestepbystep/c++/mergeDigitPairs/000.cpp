int summa(int x)
{
    if (x < 10)
    {
        return x;
    }
    int l = x % 10, r = (x / 10) % 10;
    return l + r > 10 ? summa(l + r) : l + r;
}
int mergeDigitPairs(int x)
{
    if (x < 0)
    {
        int u = -x;
        int l = u % 10, r = (u / 10) % 10;
        return mergeDigitPairs(x / 100) * 10 - summa(l + r);
    }
    else if (x < 10)
    {
        return x;
    }
    int l = x % 10, r = (x / 10) % 10;
    return mergeDigitPairs(x / 100) * 10 + summa(l + r);
}
