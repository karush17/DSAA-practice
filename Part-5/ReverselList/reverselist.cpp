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
    p = first;
    while(p)
    {
        printf("%d",p->data);
        p = p->next;
    }
}

void reverse(struct node *p)
{
    struct node *q = NULL;
    struct node *r = NULL;
    while(p!=NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;

    }
    display(p);
}

int main()
{   int A[] = {1,3,5,7,9};
    create(A,5);
    reverse(first);
    return 0;
}
