#include <stdio.h>


void swap(char s[], int l, int i)
{
    char t;
    t = s[l];
    s[l] = s[i];
    s[i] = t;

}

void perm(char s[], int l, int h)
{
    int i;
    if(l==h)
        printf("%s\n",s);
    else
    {
        for(i=l;i<=h;i++)
        {
            swap(s,l,i);
            perm(s,l+1,h);
            swap(s,l,i);
        }
    }
}

int main()
{
    char A[] = "ABC";
    perm(A, 0, 2);

}
