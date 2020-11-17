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

void insert(struct node *p, int x)
{
    p = first;
    struct node *q = new node;
    q = NULL;
    while(p && p->data < x)
    {
        q = p;
        p = p->next;
    }

    struct node *t = new node;
    if(p==first)
    {
        t->next = first;
        first=t;
    }
    else
    {t->data = x;
    t->next = q->next;
    q->next = t;
    }

    display(p);
}

int main()
{   int A[] = {3,5,7,10,15};
    create(A,5);
    insert(first, 9);
    return 0;
}
