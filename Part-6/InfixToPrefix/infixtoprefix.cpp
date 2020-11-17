#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

struct stack
{
    int size;
    int top;
    char *s;
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

int pop(struct stack *st)
{
    if(st->top == -1)
    {    printf("Stack Underflow");
        return -1;
    }
    else
    {   int x;
        x = st->s[st->top];
        st->top--;
        return x;
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

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
        return 0;
    else
    {
        return 1;
    }
    
}

int pre(char x)
{
    if(x=='+' || x=='-')
        return 1;
    else if(x=='*' || x=='/')
        return 2;
    else
    {
        return 0;
    }
    
}

char* convert(char *infix)
{
    struct stack *st;
    st->size = strlen(infix);
    st->top = -1;
    st->s = new char[st->size];

    char *postfix = new char[strlen(infix) +1];
    int i=0, j=0;
    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if(pre(infix[i])> pre(StackTop(st)))
                push(st, infix[i++]);
            else
            {
                postfix[j++] = pop(st);
            }
            
        }
    }
    while(!isEmpty(st))
    {
        postfix[j++] = pop(st);
    }
    postfix[j++] = '\0';
    return postfix;
}

int main()
{
    char infix[] = "a+b*c-d/e";
    char *postfix;
    postfix = convert(infix);
    printf("%s",postfix);
    return 0;
}
