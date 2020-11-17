#include <stdio.h>

int comb(int n, int r)
{
    if(r==0 || n==r)
        return 1;
    else
        return comb(n-1,r-1) + comb(n-1,r);    
}

int main()
{
    int n = 4;
    int r = 2;
    printf("%d", comb(n,r));
    return 0;
}
