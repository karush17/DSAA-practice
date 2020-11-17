#include <iostream>
#include <stdio.h>

using namespace std;

void Merge(int *A, int l, int mid, int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    for(;i<=mid;i++)
        B[k++]=A[i];
    for(;j<=h;j++)
        B[k++]=A[j];
    for(i=l;i<=h;i++)
        A[i]=B[i];
}

void MergeSort(int *A, int l, int h)
{   
    int mid;
    if(l<h)
    {
        mid = (l+h)/2;
        MergeSort(A,l,mid);
        MergeSort(A,mid+1,h);
        Merge(A,l, mid, h);
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
    MergeSort(A, 0, 4);
    display(A, 5);
}
