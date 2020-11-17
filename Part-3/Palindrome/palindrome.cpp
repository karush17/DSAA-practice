#include <stdio.h>


int main()
{
    char A[] = "madaa";
    int i,j;
    for(int j=0;A[j]!='\0';j++)
    {};

    for(i=0;i<j;i++,j--)
    {
        if(A[i]!=A[j])
        {    printf("Not a palindrome!");
            break;
        }
    }

}
