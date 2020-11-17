#include <stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};


int unsorteduplicate(struct Array *arr)
{
    int max = 0;
    for(int i=0;i<arr->length;i++)
    {
        if(arr->A[i]>max)
            max = arr->A[i];
    }
    
    int H[max+1] = { };
    // for(int m=0;m<max;m++)
    //     printf("%d",H[m]);
    for(int j=0;j<arr->length;j++)
    {
        H[arr->A[j]]++;
    }

    for(int k=0;k<max+1;k++)
    {
        if(H[k]>1)
            printf("%d was repeated %d times\n",k,H[k]);
    }
}

int main()
{
    struct Array arr = {{8,3,6,4,6,5,6,8,2,7},10,10};
    unsorteduplicate(&arr);
}
