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

int main()
{   
    int x = 0;
    struct poly p;
    printf("enter number of non-zero terms:");
    scanf("%d",&p.n);
    p.t = new term[p.n];
    printf("enter terms:");
    for(int i=0;i<p.n;i++)
    {
        scanf("%d%d",&p.t[i].coeff,&p.t[i].exp);
    }
    printf("enter value of x:");
    scanf("%d",&x);

    int sum=0;
    for(int k=0;k<p.n;k++)
    {
        sum += p.t[k].coeff*pow(x,p.t[k].exp);
    }
    printf("value = %d",sum);

}
