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
    if(i-j==0)
        A[n-1 + i-1] = x;
    else if(i-j==1)
        A[i-2] = x;
    else if(i-j==-1)
        A[n-1 + n +i-1] = x;

}

int Diagonal::get(int i,int j)
{
    if(i-j==0)
        return A[n-1 + i-1];
    else if(i-j==1)
        return A[i-2];
    else if(i-j==-1)
        return A[n-1 + n +i-1];
    else
        return (0);
    
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
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(-1<=i-j<=1)
                arr.set(i,j,1);
        }
    }
    arr.display();
    
}