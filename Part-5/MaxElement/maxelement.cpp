#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
    int data;
    struct node *next; 
}*first=NULL;

void create(int A[], int n)
{   
    struct node *t,*last;
    first  = new node;
    first->data = A[0];
    first->next = NULL;
    last = first;
    for(int i=1;i<n;i++)
    {
        t = new node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void max(struct node *p)
{
    int max = 0;
    while(p!=NULL)
    {
        if(p->data > max)
            max = p->data;
        p = p->next;
    }
    printf("%d",max);
}

int main()
{
    int A[] = {3,5,7,10,15};
    create(A,5);
    max(first);
    return 0;
}
