#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

struct term
{
    int coeff;
    int exp;
};

struct poly
{
    int n;
    struct term *t;
};

void display(struct poly p)
{
    for(int i=0;i<p.n;i++)
    {
        cout << p.t[i].coeff << "x" << p.t[i].exp << " ";
    }
}


void add(struct poly p1,struct poly p2)
{
    int i=0,j=0,k=0;
    struct poly sum;
    sum.n = p1.n+p2.n;
    sum.t = new term[sum.n];

    while(i<p1.n && j<p2.n)
    {
        if(p1.t[i].exp > p2.t[j].exp)
            sum.t[k++] = p1.t[i++];
        else if(p1.t[i].exp < p2.t[j].exp)
            sum.t[k++] = p2.t[j++];
        else
            sum.t[k].coeff = p1.t[i].coeff + p2.t[j].coeff;
            sum.t[k].exp = p1.t[i].exp;
            printf("%d",sum.t[k].exp);
            i++;
            j++;
    }

    display(sum);
}

void create(struct poly p1)
{
    printf("enter number of non-zero terms:");
    scanf("%d",&p1.n);
    p1.t = new term[p1.n];
    printf("enter terms:");
    for(int i=0;i<p1.n;i++)
    {
        scanf("%d%d",&p1.t[i].coeff,&p1.t[i].exp);
    }

}

int main()
{   
    int x = 0;
    struct poly p1;
    struct poly p2;

    create(p1);
    create(p2);
    add(p1,p2);
}
