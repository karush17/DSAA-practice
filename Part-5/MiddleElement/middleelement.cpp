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

void middle(struct node *p)
{   
    struct node *q=first;
    while(q!=NULL)
    {
        q =q->next;
        if(q)
        {
            p = p->next;
            q = q->next;
        }
    }
    printf("Middle Element: %d",p->data);
}

int main()
{   int A[] = {3,2,5,5,7,10,15};
    create(A,5);
    middle(first);
    return 0;
}
