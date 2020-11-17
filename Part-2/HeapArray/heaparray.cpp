#include <stdio.h>

int main()
{
    int *P;
    P = new int[5];
    printf("Array created!\n");

    P[0] = 0;
    P[1] = 0;
    P[2] = 0;
    P[3] = 0;
    P[4] = 0;
    for(int i=0;i<5;i++)
    {
        printf("%d",P[i]);
    }
    delete []P;
    printf("Array deleted!\n");
    return 0;
}
