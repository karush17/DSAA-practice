#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
    int data;
    struct node *prev; 
    struct node *next; 
}*head=NULL;

void create(int A[], int n)
{   
    struct node *t,*last;
    head  = new node;
    head->data = A[0];
    head->next = NULL;
    head->prev = NULL;
    last = head;
    for(int i=1;i<n;i++)
    {
        t = new node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void display(struct node *h)
{
    do
    {
        printf("%d",h->data);
        h = h->next;
    }while(h!=head);
}

void insert(struct node *p, int pos)
{
    struct node *t;
    t = new node;
    t->data = 10;
    for(int i=0;i<pos-1;i++)
    {
        p = p->next;
    }
    t->next = p->next;
    if(p->next)
        p->next = t;
    t->prev = p;
    p = t->next;
    p->prev = t;
}

int main()
{   int x = 2;
    int A[] = {3,5,5,8,8};
    create(A,5);
    insert(head, x);
    display(head);
    return 0;
}
