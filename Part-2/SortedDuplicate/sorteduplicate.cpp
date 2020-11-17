#include <stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};


int sortedduplicate(struct Array *arr)
{
    int count = 0;
    int dup = 0;
    for(int i=0;i < arr->length-1;i++)
    {
        if(arr->A[i]==arr->A[i+1])
        {   
            if(arr->A[i]!=dup)
            {    printf("%d\n",arr->A[i]);}
            count++;
            dup = arr->A[i];
        }
    }
    printf("%d\n",count);
}

int main()
{
    struct Array arr = {{3,6,8,8,10,12,15,15,15,20},10,10};
    sortedduplicate(&arr);
}
