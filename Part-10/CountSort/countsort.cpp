#include <iostream>
#include <stdio.h>

using namespace std;

int findMax(int *A, int n)
{   int max;
    for(int i=0;i<n;i++)
    {
        if(A[i]>max)
            max = A[i];
    }
    return max;
}

void CountSort(int *A, int n)
{   int max=0, i, j=0;
    max = findMax(A, n);
    int C[max+1] = { };

    for(i=0;i<max+1;i++)
    {
        C[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        C[A[i]]++;
    }
    i=0;
    while(i<max+1)
    {
        if(C[i]>0)
        {
            A[i]=i;
            C[i]--;
        }
        else
            i++;
    }

}

void display(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}

int main()
{
    int A[] = {8,5,7,3,2};
    CountSort(A, 5);
    display(A, 5);
}
