#include <iostream>
#include <stdio.h>

using namespace std;

void BubbleSort(int *A, int n)
{
    int flag;
    for(int i=0;i<n;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
                swap(A[j],A[j+1]);
                flag=1;
        }        
        if(flag==0)
            break;
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
    BubbleSort(A, 5);
    display(A, 5);
}
