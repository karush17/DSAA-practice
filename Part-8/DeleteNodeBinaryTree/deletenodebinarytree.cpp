#include <iostream>
#include <stdio.h>

struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;

using namespace std;

int Height(node *p) {
    int x;
    int y;
    if (p == NULL){
        return 0;
    }
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x + 1 : y + 1;
}
 
node* InPre(node *p) {
    while (p && p->rchild != NULL){
        p = p->rchild;
    }
    return p;
}
 
node* InSucc(node *p) {
    while (p && p->lchild != NULL){
        p = p->lchild;
    }
    return p;
}

node * deletenode(node *t, int key)
{
    node *q;

    if(t==NULL)
        return NULL;
    
    if(t->lchild == NULL && t->rchild == NULL)
    {
        if(t==root)
            root = NULL;
        delete t;
        return NULL;
    }

    if(key<t->data)
    {
        t->lchild = deletenode(t->lchild, key);
    }
    else if(key>t->data)
    {
        t->rchild = deletenode(t->rchild,key);
    }
    else
    {
        if(Height(t->lchild) > Height(t->rchild))
        {
            q = InPre(t->lchild);
            t->data = q->data;
            t->lchild = deletenode(t->lchild, q->data);
        }        
        else
        {
            q = InSucc(t->rchild);
            t->data = q->data;
            t->rchild = deletenode(t->rchild, q->data);
        }                
    }
    return t;
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
    root = insert(root, 40);
    root = insert(root, 30);
    root = insert(root, 15);
    root = insert(root, 20);
    struct node *temp;
    temp = deletenode(root,15);
    printf("%d", temp->data);
}
