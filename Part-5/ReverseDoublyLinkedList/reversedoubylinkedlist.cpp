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

void reverse(struct node *p)
{
    struct node *temp;
    while(p!=NULL)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;
    }
}

int main()
{   int A[] = {3,5,5,8,8};
    create(A,5);
    reverse(head);
    display(head);
    return 0;
}
