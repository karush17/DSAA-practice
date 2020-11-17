#include <stdio.h>
#include <iostream>
#include<string.h>

using namespace std;

struct stack
{
    int size;
    int top;
    char *s;
};

void push(struct stack *st,char x)
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

int isBalance(char *exp)
{
    struct stack st;
    st.size = strlen(exp);
    st.s = new char[st.size];
    st.top = -1;

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
            push(&st, exp[i]);
        else if(exp[i]==')')
        {
            if(isEmpty(&st))
                return 0;
            else
                pop(&st);
        }
        if(isEmpty(&st))
            return 1;
        else
            return 0;
    }
    return 0;
}

int main()
{
    char exp[] = "((a+b)*(c-d))";
    printf("%d",isBalance(exp));
    return 0;
}
