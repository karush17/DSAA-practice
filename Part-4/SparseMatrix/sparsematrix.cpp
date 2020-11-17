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
    struct sparse s;
    create(&s);
    display(&s);

}
