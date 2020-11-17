#include <stdio.h>

double e(int x,int n)
{
    static double s;
    if(n==0)
        return s;
    else
    {
        s = 1 + (x*(s))/n;
        return e(x,n-1);
    }
    
}

int main()
{
    int x = 1;
    int n = 10;
    printf("%lf",e(x,n));
    return 0;
}
