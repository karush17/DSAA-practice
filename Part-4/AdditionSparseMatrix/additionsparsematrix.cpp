#include <stdio.h>
#include <iostream>

using namespace std;

struct element
{
    int i;
    int j;
    int x;
};

struct sparse
{
    int m;
    int n;
    int num;
    struct element *e;
};

void create(struct sparse *s)
{
    printf("enter dimensions:");
    scanf("%d%d",&s->m,&s->n);
    printf("enter number of non-zero elements:");
    scanf("%d",&s->num);
    s->e = new element[s->num];
    printf("enter all elements:");
    for(int i=0;i < s->num;i++)
    {
        scanf("%d%d%d",&s->e[i].i,&s->e[i].j,&s->e[i].x);
    }
}

void display(struct sparse *s);

void add(struct sparse *s1,struct sparse *s2)
{
    sparse *sum;
    if(s1->m!=s2->m || s1->n!=s2->n)
        printf("shape mismatch");

    else
    {sum = new sparse;
    sum->m = s1->m;sum->n = s1->n;
    sum->e = new element[s1->num+s2->num];

    int i=0,j=0,k=0;
    while(i<s1->num && j<s2->num)
    {
        if(s1->e[i].i < s2->e[j].i)
            sum->e[k++] = s1->e[i++];
        else if(s1->e[i].i > s2->e[j].i)
            sum->e[k++] = s2->e[j++];
        else
        {
            sum->e[k] = s1->e[i++];
            sum->e[k++].x += s2->e[j++].x;
        }
    }

    display(sum);
    }
}


void display(struct sparse *s)
{
    int k=0;
    for(int i=0;i < s->m;i++)
    {
        for(int j=0;j < s->n;j++)
        {
            if(i==s->e[k].i && j==s->e[k].j)
            {
                cout << s->e[k].x << " ";
                k++;
            }
            else
            {
                cout << "0 ";
            }
            
        }
        cout << endl;
    }
}

int main()
{   
    struct sparse s1;
    struct sparse s2;
    create(&s1);
    create(&s2);

    add(&s1,&s2);

}
