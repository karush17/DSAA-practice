#include <stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

int sortedsumpair(struct Array *arr, int sum)
{
    int i=0;
    int j=arr->length-1;
    while(i<j)
    {
        if(arr->A[i]+arr->A[j] < sum)
            i++;
        else if(arr->A[i]+arr->A[j]>sum)
            j--;
        else
        {
            printf("%d+%d=%d",arr->A[i],arr->A[j],sum);
            i++;
            j--;
        }
        
    }
}

int main()
{
    struct Array arr = {{1,3,4,5,6,8,9,10,12,14},10,10};
    sortedsumpair(&arr, 10);
}
