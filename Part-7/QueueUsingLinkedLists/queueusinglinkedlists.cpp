#include <stdio.h>
#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;

void enqueue(struct node *p, int x)
{
    struct node *t = new node;
    if(t==NULL)
        printf("Queue is full");
    else
    {
        t->data = x;
        t->next = NULL;
        if(front==NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }   
    }
}

int dequeue(struct node *p)
{
    int x = -1;
    if(front==NULL)
        printf("Queue is empty");
    else
    {
        x = front->data;
        struct node *p = front;
        front = front->next;
        delete p;
    }
    return x;
}

void display(struct node *p)
{
    struct node *t = front;
    while(t!=NULL)
    {
        printf("%d\n",t->data);
        t = t->next;
    }
}

int main()
{
    struct node *q;
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    display(q);
    dequeue(q);
    display(q);
    
}
