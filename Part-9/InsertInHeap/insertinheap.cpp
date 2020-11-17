#include <iostream>
#include <stdio.h>

using namespace std;

void Insert(int *A, int n)
{
    int temp, i=n;
    temp = A[n];
    while(i>0 && temp>A[i/2])
    {
        A[i] = A[i/2];
        i = i/2;
    }
    A[i] = temp;
}

void display(int *A, int n)
{
    for(int i=0;i<n+1;i++)
    {
        printf("%d ", A[i]);
    }
}
int main()
{
    int A[] = {30,20,15,5,10,12,6,40};
    Insert(A,7);
    display(A, 7);

}
