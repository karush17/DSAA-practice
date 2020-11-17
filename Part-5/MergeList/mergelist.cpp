#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
    int data;
    struct node *next; 
}*first=NULL,*second=NULL,*third=NULL;

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

void create2(int A[], int n)
{   
    struct node *t,*last;
    second  = new node;
    second->data = A[0];
    second->next = NULL;
    last = second;
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
    while(p)
    {
        printf("%d",p->data);
        p = p->next;
    }
}

void merge(struct node *p, struct node *q)
{
    struct node *r = third;
    struct node *last = NULL;

    if(p->data < q->data)
    {
        r = last = p;
        p = p->next;
        r->next = NULL;
    }
    else
    {

        r = last = q;
        q = q->next;
        r->next = NULL;
    }

    while(p!=NULL && q!=NULL)
    {
        printf("%d",p->data);

        if(p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }

        if(p!=NULL)
            last->next =p;
        if(q!=NULL)
        {
            last->next = q;
        }
        
    }
    display(r);
}

int main()
{   int A[] = {3,5,5,8,8,8};
    create(A,5);
    int B[] = {1,2,7,9,11};
    create2(B,5);
    merge(first, second);
    return 0;
}
