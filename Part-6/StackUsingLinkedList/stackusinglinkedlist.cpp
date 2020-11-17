#include <iostream>
#include <stdio.h>

using namespace std;

struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push(int x)
{
    struct node *p = new node;
    if(p==NULL)
        printf("Stack Overflow");
    else
    {
        p->data = x;
        p->next=  top;
        top = p;
    }
    
}

void pop()
{
    if(top==NULL)
        printf("Stack Underflow");
    else
        {
            struct node *p;
            p = top;
            top = p->next;
            delete p;
        }
}

int peek(int pos)
{
    int x = -1;
    struct node *p = top;
    for(int i=0;p!=NULL && i<pos-1;i++)
    {
        p = p->next;
    }
    if(p!=NULL)
        return p->data;
    else
    {
        return x;
    }
    
}

int StackTop()
{
    if(top)
        return top->data;
    else
    {
        return -1;
    }
    
}

int isEmpty()
{
    if(top==NULL)
        return 0;
    else
    {
        return -1;
    }
    
}

int isFull()
{
    struct node *p = new node;
    if(p==NULL)
        return 0;
    else
    {
        return -1;
    }
    
}

void display()
{   printf("Contents of the stack:\n");
    struct node *p = top;
    while(p)
    {   
        printf("%d\n",p->data);
        p = p->next;
    }
}

int main()
{   
    struct node *st=top;
    push(5);
    push(4);
    push(3);
    display();
    pop();
    display();
    return 0;
}
