#include <stdio.h>
#include <iostream>

using namespace std;

class Diagonal
{
    private:
        int n;
        int *A;
    public:
        Diagonal(int n)
        {
            this->n=n;
            A = new int[n];
        };
        void set(int i,int j,int x);
        int get(int i,int j);
        void display();
        ~Diagonal(){
            delete []A;
        };
};

void Diagonal::set(int i,int j,int x)
{
    if(i<=j)
        A[j-i] = x;
    else
    {
        A[n-1 + i-j] = x;
    }
    
}

int Diagonal::get(int i,int j)
{
    if(i<=j)
        return A[j-i];
    else
    {
        return A[n-1 + i-j];
    }
    
}

void Diagonal::display()
{   int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            temp = get(i,j);
            cout << temp << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n=5;
    Diagonal arr(n);
    for(int k=0;k<n;k++)
    {
        for(int m=0;m<n;m++)
        {
            arr.set(k,m,k+m);
        }
    }
    arr.display();
    
}