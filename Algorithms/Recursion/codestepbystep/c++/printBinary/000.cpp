void printBinary(int x)
{
    if(x==0){
        cout<<x;
        return;
    }
    else if (x == -1)
    {
        cout << x;
        return;
    }
    else if (x == 1)
    {
        cout << x % 2;
        return;
    }
    printBinary(x / 2);
    cout << (x < 0 ? -x : x) % 2;
}
