#include <stdio.h>


int main()
{
    char A[] = "decimal";
    char B[] = "medical";
    char max='a';
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        if(max>A[i])
            max = A[i];
    };

    int H[max] = { };

    for(i=0;A[i]!='\0';i++)
    {
        H[A[i]-'a'] +=1;
    }

    for(i=0;B[i]!='\0';i++)
    {
        H[B[i]-'a'] -=1;
        printf("%d",H[B[i]-'a']);
        if(H[B[i]-'a'] < 0)
        {    printf("Not an anagram!");
            break;
        }
    }

}
