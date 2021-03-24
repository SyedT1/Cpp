bool digitsSorted(int x)
{
    if (x < 0)
    {
        return digitsSorted(-x);
    }
    else if (x < 10)
    {
        return true;
    }
//    int rem = (x / 10) % 10;
    bool ver = digitsSorted(x / 10);
  //  cout << rem << ' ' << x << '\n';
    if (ver == false)
    {
        return ver;
    }
    else
    {
        //12
        //(12/10)%10 = 1
        //(12%10)>=(12/10)%10
        return x%10 >= (x/10)%10; 
    }
}
