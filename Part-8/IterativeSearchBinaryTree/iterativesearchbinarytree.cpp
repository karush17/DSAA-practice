#include <iostream>
#include <stdio.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
};

using namespace std;

node * rsearch(node *t, int key)
{
    while(t!=NULL)
    {
        if(key==t->data)
            return t;
        else if(key<t->data)
        {
            t = t->lchild;
        }
        else
        {
            t = t->rchild;
        }
    }
    return NULL;
}

node * insert(node *p, int key)
{
    node * q;
    if(p==NULL)
    {
        q = new node;
        q->data = key;
        q->lchild = q->rchild = NULL;
    }

    if(key<p->data)
        p->lchild = insert(p->lchild, key);
    else
    {
        p->rchild = insert(p->rchild, key);
    }
    return q;
}
int main()
{   int k;
    struct node *root;
    root = insert(root, 40);
    root = insert(root, 30);
    root = insert(root, 15);
    root = insert(root, 20);
    struct node *temp;
    temp = rsearch(root,15);
    printf("%d", temp->data);
}
