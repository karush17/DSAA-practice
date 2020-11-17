#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(struct Array *arr)
{
    for(int k=0;k<arr->length;k++)
    {
        printf("%d",arr->A[k]);
    }
}

void arrangenegative(struct Array *arr)
{
    int temp;
    int i=0;
    int j=arr->length - 1;
    while(i<j)
    {   
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}
int main()
{
    struct Array arr = {{2,-3,25,10,-15,-7},10,6};
    arrangenegative(&arr);
    display(&arr);
    return 0;
}
