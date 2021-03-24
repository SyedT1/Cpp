void countToBy(int left, int right)
{
    if (left < 1 || right < 1)
    {
        throw left * (left < 1) + right * (right < 1);
    }
    if (left - right < 1)
    {
        cout << left;
        return;
    }
    countToBy(left - right, right);
    cout << ", " << left;
}
