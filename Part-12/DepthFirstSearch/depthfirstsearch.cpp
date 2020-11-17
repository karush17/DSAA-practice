#include <iostream>
#include <stdio.h>
#include <stack>

using namespace std;

void DFS(int u, int A[][8], int n)
{
    int visited[8] {0};
    stack<int> stk;
    stk.emplace(u);

    while(!stk.empty())
    {
        u = stk.top();
        stk.pop();

        if(visited[u] != 1)
        {
            cout << u << ", " << flush;
            visited[u] = 1;

            for(int v=n-1;v>=0;v--)
            {
                if(A[u][v]==1 && visited[v]==0)
                {
                    stk.emplace(v);
                }
            }
        }
    }
}

int main()
{
    int A[8][8] = {{0, 0, 0, 0, 0, 0, 0, 0},
                   {0, 0, 1, 1, 1, 0, 0, 0},
                   {0, 1, 0, 1, 0, 0, 0, 0},
                   {0, 1, 1, 0, 1, 1, 0, 0},
                   {0, 1, 0, 1, 0, 1, 0, 0},
                   {0, 0, 0, 1, 1, 0, 1, 1},
                   {0, 0, 0, 0, 0, 1, 0, 0},
                   {0, 0, 0, 0, 0, 1, 0, 0}};
    
    cout << "Vertex: 1 -> " << flush;
    DFS(1, A, 8);
 
    cout << "Vertex: 4 -> " << flush;
    DFS(4, A, 8);
}
