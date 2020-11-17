#include <iostream>
#include <stdio.h>

using namespace std;

int Partition(int *A, int l, int h)
{
    int pivot = A[l];
    int i=l,j=h;

    do
    {
        do
        {
            i++;
        } while (A[i]<=pivot);

        do
        {
            j--;
        } while (A[j]>pivot);

    if(i < j)
        swap(A[i],A[j]);
    } while (i<j);
    swap(A[l],A[j]);
    return j;
}


void QuickSort(int *A, int l, int h)
{   int j;
    if(l<h)
    {
        j = Partition(A, l, h);
        QuickSort(A, l, j);
        QuickSort(A, j+1, h);
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
    QuickSort(A, 0, 5);
    display(A, 5);
}
