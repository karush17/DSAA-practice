#include <stdio.h>

int fun(int n)
{
    if(n>100)
        return n-10;
    else
        return fun((fun(n+11)));
}

int main()
{
    int ans;
    int x = 95;
    ans = fun(x);
    printf("%d",ans);
}
