#include <stdio.h>

struct Array
{
    int A[10];
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

int mergearray(struct Array *A, struct Array *B)
{
    int i = 0;
    int j = 0;
    int k = 0;
    struct Array C = {{0},A->length + B->length,A->length + B->length};
    while(i < A->length && j < B->length)
    {
        if(A->A[i] < B->A[j])
            C.A[k++] = A->A[i++];
        else
            C.A[k++] = B->A[j++];
    }
    for(;i<A->length;i++)
        C.A[k++] = A->A[i];
    for(;j<B->length;j--)
        C.A[k++] = B->A[j];
    display(&C);
}
int main()
{
    struct Array A = {{3,8,16,20,25},10,5};
    struct Array B = {{4,10,12,22,23},10,5};
    mergearray(&A, &B);
}
