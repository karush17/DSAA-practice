#include <stdio.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

int BinarySearch(int arr[],int l,int h,int key)
{
    int mid;
    while(l<=h)
    {
        mid = (l+h)/2;
        if(key==arr[mid])
            return mid;
        else if(key<arr[mid])
            h = mid-1;
        else
            l = mid+1;
    };
    return -1;

}


int main()
{
    struct Array arr = {{0,1,2,3,4},10,5};
    printf("%d",BinarySearch(arr.A, 0, arr.length-1, 4));
    return 0;
}
