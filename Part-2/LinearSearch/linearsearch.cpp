#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int LinearSearch(struct Array *arr, int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(arr->A[i]==key)
        {
            swap(&arr->A[0],&arr->A[i]);
            return i;
        }
    }
    return -1;
}
int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};
    printf("%d\n",LinearSearch(&arr,5));
    for(int i=0;i<arr.length;i++)
    {
        printf("%d",arr.A[i]);
    }

    return 0;
}
