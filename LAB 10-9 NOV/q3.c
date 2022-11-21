// WAP to implement DFS
#include <stdio.h>
#include <stdlib.h>

int visited[4] = {0, 0, 0, 0};
int A[4][4] = {
    {0, 1, 1, 1},
    {1, 0, 1, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}};

void DFS(int i)
{
    printf("%d ", i);
    visited[i] = 1;
    for (int j = 0; j < 4; j++)
    {
        if (A[i][j] == 1 && !visited[j])
        {
            DFS(j);
        }
    }
}

int main()
{
    // DFS Implementation
    DFS(0);
    return 0;
}