#include <iostream>
#include <stdio.h>

using namespace std;

void SelectionSort(int *A, int n)
{   int i,j,k;
    for(i=0;i<n-1;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(A[j] < A[k])
                k = j;
        }
        swap(A[i],A[k]);
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
    SelectionSort(A, 5);
    display(A, 5);
}
