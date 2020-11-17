#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
    int data;
    struct node *next; 
}*head=NULL;

void create(int A[], int n)
{   
    struct node *t,*last;
    head  = new node;
    head->data = A[0];
    head->next = NULL;
    last = head;
    for(int i=1;i<n;i++)
    {
        t = new node;
        t->data = A[i];
        t->next = last->next;
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

void del(struct node *p, int pos)
{
    struct node *q;
    for(int i=0;i<pos-1;i++)
    {
        p = p->next;
    }
    q = p->next;
    p->next = q->next;
    delete q;
}

int main()
{   int x = 2;
    int A[] = {3,5,5,8,8};
    create(A,5);
    del(head, x);
    display(head);
    return 0;
}
