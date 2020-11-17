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

int add(struct node *p)
{   
    if(p==0)
        return 0;
    else
    {
        return p->data + add(p->next);
    }
    
}

int main()
{
    int A[] = {3,5,7,10,15};
    create(A,5);
    printf("%d",add(first));
    return 0;
}
