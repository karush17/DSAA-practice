#include <stdio.h>

int main()
{
    int **A;
    A = new int*[3];
    A[0] = new int[4];
    A[1] = new int[4];
    A[2] = new int[4];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            A[i][j] = 0;
        }
    }
    printf("%d",A[2][2]);    
    delete []A;
}
