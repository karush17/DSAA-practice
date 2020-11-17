#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void Delete(int *A, int n)
{
    int x,i,j;
    x = A[n];
    A[1] = A[n];
    i = 1; j = 2*i;
    while(j < n-1)
    {
        if(A[j+1]>A[j])
        {
            swap(A[i],A[j]);
            i = j;
            j = 2*j;
        }
        else
        {
            break;
        }
    }
}

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
    Delete(A,7);
    display(A,6);

}
