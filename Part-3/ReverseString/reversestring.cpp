#include <stdio.h>


int main()
{
    char A[] = "python";
    char t;
    int i,j;
    
    for(j=0;A[j]!='\0';j++)
    {};

    for(i=0,j=j-1;i<j;i++,j--)
    {
        t = A[i];
        A[i] = A[j];
        A[j] = t;
    }

    printf("%s",A);
}
