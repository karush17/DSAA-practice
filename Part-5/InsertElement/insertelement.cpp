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

void insert(struct node *p, int pos)
{
    struct node *t = new node;
    if(pos==0)
    {
        t->data = 9;
        t->next = first;
        first = t;
    }
    else
    {
        t->data = 9;
        p = first;
        for(int i=0;i<pos-1 && p;i++)
        {
            p=p->next;
        }
        t->next = p->next;
        p->next = t;
    }
    
}

int main()
{   int A[] = {3,5,7,10,15};
    create(A,5);
    insert(first, 2);
    return 0;
}
