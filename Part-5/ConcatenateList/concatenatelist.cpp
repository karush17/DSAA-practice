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

void concatenate(struct node *p)
{
    while(p->next!=NULL)
    {
        p = p->next;
    }
    p->next = first;
}

int main()
{   int A[] = {3,5,5,8,8,8};
    create(A,5);
    concatenate(first);
    return 0;
}
