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

int singlemissingelement(struct Array *arr)
{   int diff;
    for(int i=0;i < arr->length-1;i++)
    {
        diff = arr->A[i] - i;
        if(diff != arr->A[i+1] - (i+1))
            return diff+i+1;
    }
}

int main()
{   int miss;
    struct Array arr = {{3,4,5,6,8,9,10,11},20,11};
    miss = singlemissingelement(&arr);
    printf("%d",miss);
}
