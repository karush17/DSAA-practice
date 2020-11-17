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

int multiplemissingelement(struct Array *arr)
{   int diff;
    int i=0;
    int st_diff = arr->A[i] - i;
    for(i=0;i < arr->length-1;i++)
    {
        diff = arr->A[i] - i;
        if(diff != st_diff)
            while(st_diff<diff)
            {
                printf("%d",st_diff+i);
                st_diff++;
            }
    }
    return 0;
}

int main()
{   int miss;
    struct Array arr = {{6,7,8,9,11,12,15,16,17,18,19},20,11};
    miss = multiplemissingelement(&arr);
}
