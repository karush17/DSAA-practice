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

node * search(struct node *p,int key)
{   struct node *q = NULL;
    while(p!=NULL)
    {
        if(p->data == key)
         {  q->next = p->next;
            p->next = first;
            return p;
         }
        p = p->next;
    }
}

int main()
{   struct node *s;
    int A[] = {3,5,7,10,15};
    create(A,5);
    s = search(first, 10);
    printf("%d",s);
    return 0;
}
