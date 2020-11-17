#include <stdio.h>

int main()
{
    int *p = new int[5];
    int *q = new int[10];

    p[0] = 0;
    p[1] = 0;
    p[2] = 0;
    p[3] = 0;
    p[4] = 0;

    for(int i=0;i<5;i++)
    {
        q[i] = p[i];
    }

    delete []p;
    printf("%d",q[4]);
    p = q;
    q = NULL;
    printf("%d",q[4]);

}
