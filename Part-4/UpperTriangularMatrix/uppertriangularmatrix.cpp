#include <stdio.h>
#include <iostream>

using namespace std;



int main()
{
    int n=5;
    int x=1;
    int A[n] = { };

    // set values
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
                A[(j*(j-1)/2)+(i-1)] = x;
        };
    };    

    // display values
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i<=j)
                cout << A[(j*(j-1)/2)+(i-1)] << " ";
            else
            {
                cout << "0 ";
            }
            
        }
        cout << endl;
    }
}