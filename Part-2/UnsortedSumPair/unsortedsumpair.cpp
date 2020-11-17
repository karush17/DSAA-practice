#include <stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

int unsortedsumpair(struct Array *arr,int sum)
{
    int max = 0;
    for(int i=0;i<arr->length;i++)
    {
        if(arr->A[i]>max)
            max = arr->A[i];
    }

    int H[max+1] = { };

    for(int j=0;j<arr->length;j++)
    {
        if(H[sum-arr->A[j]]==1)
            {printf("%d+%d=%d\n",arr->A[j],sum-arr->A[j],sum);}
        
        H[arr->A[j]] = 1;
    }
}

int main()
{
    struct Array arr = {{6,3,8,10,16,7,5,2,9,14},10,10};
    unsortedsumpair(&arr, 10);
}
