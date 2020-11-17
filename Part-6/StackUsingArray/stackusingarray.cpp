#include <stdio.h>
#include <iostream>

using namespace std;

struct stack
{
    int size;
    int top;
    int *s;
};

void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
        printf("Stack Overflow");
    else
    {
        st->top++;
        st->s[st->top] = x;
    }
    
}

void pop(struct stack *st)
{
    if(st->top == -1)
        printf("Stack Underflow");
    else
    {
        st->top--;
    }
}

int peek(struct stack *st, int pos)
{
    int x = -1;
    if(st->top-pos+1 < 0)
        return 0;
    else
    {
        x = st->s[st->top - pos +1];
        return x;
    }
    
}

int StackTop(struct stack *st)
{
    if(st->top==-1)
        return -1;
    else
    {
        return st->s[st->top];
    }

}

int isEmpty(struct stack *st)
{
    if(st->top==-1)
        return 1;
    else
    {
        return 0;
    }
    
}

int isFull(struct stack *st)
{
    if(st->top==st->size-1)
        return 1;
    else
    {
        return 0;
    }
    
}

void display(struct stack *st)
{   printf("Contents of Stack:\n");
    for(int i=0;i<=st->top;i++)
    {
        printf("%d\n",st->s[i]);
    }
}

int main()
{
    struct stack st;
    st.size = 5;
    st.s = new int[st.size];
    st.top = -1;
    push(&st, 5);
    push(&st, 4);
    push(&st, 3);
    display(&st);
    pop(&st);
    display(&st);
    return 0;
}
