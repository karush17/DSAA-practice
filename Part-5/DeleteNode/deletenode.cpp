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


void del(struct node *p,int pos)
{   int x;
    if(pos==0)
    {
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        struct node *q=NULL;
        for(int i=0;i<pos-1 && p;i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        delete p;
    }
    
    display(p);
}

int main()
{   int A[] = {3,5,7,10,15};
    create(A,5);
    del(first, 2);
    return 0;
}
