int sqrt(int x)
{
    int i = -1;
    for (int les = 0, col = 1; les <= x; i++)
    {
        les += col;
        (++col)++;
    }
    return i;
}
