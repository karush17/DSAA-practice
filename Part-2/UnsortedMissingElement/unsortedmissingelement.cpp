#include <stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void display(struct Array *arr)
{
    for(int k=0;k < arr->length;k++)
    {
        printf("%d",arr->A[k]);
    }
}

int unsortedmissingelement(struct Array *arr)
{   
    int max=0;
    for(int i=0;i < arr->length;i++)
    {
        if(arr->A[i]>max)
            max = arr->A[i];
    }

    struct Array H = {{0},max,max};
    for(int j=0;j<arr->length;j++)
    {
        H.A[arr->A[j]] = 1;
    }

    for (int k=0;k<max;k++)
    {
        if(H.A[k]!=1)
            printf("%d",k);
    }
    return 0;
}


int main()
{
    struct Array arr = {{3,7,4,9,12,6,1,11,2,10},10,10};
    unsortedmissingelement(&arr);
}
