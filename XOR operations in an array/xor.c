int xorOperation(int n, int start) {
    int x=start,i=1;
    while(i<n)
    {
        x^=start+(2*i);
        i++;
    }
    return x;
}