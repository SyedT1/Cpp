int nonMatching(string x, string y)
{
    if (x.length() == 0 || y.length() == 0)
    {
        return x.length()+y.length();
    }
    char x_l = x[0], y_l = y[0];
    if (x.length() == 1 || y.length() == 1)
    {
        if (x.length() == 1 && y.length() == 1)
        {
            return x != y;
        }
        return (x_l != y_l) + (x.length() == 1 ? y.length() : x.length()) - 1;
    }
    return (x_l != y_l) + nonMatching(&x[1], &y[1]);
}
