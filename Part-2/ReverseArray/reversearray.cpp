#include <stdio.h>

struct Array
{
    int A[5];
    int size;
    int length;
};


int reverse(struct Array *arr)
{   int i,j,temp;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
}

int main()
{
    struct Array arr = {{0,1,2,3,4},10,5};
    reverse(&arr);
    for(int k=0;k<arr.length;k++)
    {
        printf("%d",arr.A[k]);
    }
    return 0;
}
