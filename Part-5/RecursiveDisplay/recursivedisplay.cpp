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

void display(struct node *p)
{
    if(p!=NULL)
    {
        printf("%d",p->data);
        display(p->next);
    }
}

int main()
{
    int A[] = {3,5,7,10,15};
    create(A,5);
    display(first);
    return 0;
}
