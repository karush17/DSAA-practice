#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

void Heapify(int *A, int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        int j=2*i + 1;

        while(j < n-1)
        {
            if(A[j] < A[j+1])
            {
                j = j+1;
            }

            if(A[i] < A[j])
            {
                swap(A[i],A[j]);
                i = j;
                j = 2*i + 1;
            }
            else
            {
                break;
            }
            
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
    int B[] = {5,10,30,20,35,40,15};
    Heapify(B,7);
    display(B, 7);

}
