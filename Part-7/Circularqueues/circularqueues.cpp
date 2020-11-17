#include <stdio.h>
#include <iostream>

using namespace std;

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void enqueue(struct queue *q, int x)
{
    if((q->rear+1)%q->size==q->front)
        printf("Queue is full");
    else
    {
        q->rear = (q->rear+1)%q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct queue *q)
{   int x = -1;
    if(q->rear==q->front)
        printf("Queue is empty");
    else
    {
        q->front = (q->front+1)%q->size;
        x = q->Q[q->front];
    }
    return x;
}

void display(struct queue *q)
{
    int i = q->front+1;
    while(i<=q->rear)
    {
        printf("%d\n",q->Q[i]);
        i++;
    }
}
int main()
{   int deq = 0;
    struct queue q;
    q.size = 5;
    q.Q = new int[q.size];
    q.front = q.rear = 0;
    enqueue(&q, 5);
    enqueue(&q, 4);
    enqueue(&q, 3);
    enqueue(&q, 2);
    enqueue(&q, 1);
    enqueue(&q, 1);
    display(&q);
    deq = dequeue(&q);
    display(&q);
}
