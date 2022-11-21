#include <stdio.h>
int main()
{
    int m, n, c, d, totalMatrix, first[10][10], second[10][10], sum[10][10];
    printf("Enter the total numbers of marix : ");
    scanf("%d", &totalMatrix);
    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d%d", &m, &n);
    printf("Enter the elements of first matrix\n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &first[c][d]);
        }
    }

    printf("Enter the elements of second matrix\n");
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            scanf("%d", &second[c][d]);
        }
    }

    int i = 3;

    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            sum[c][d] = first[c][d] + second[c][d];
            // printf("%d\t", sum[c][d]);
        }
    }
    totalMatrix -= 2;
    while (totalMatrix--)
    {
        printf("Enter the %d matrix: \n", i);
        i++;
        for (c = 0; c < m; c++)
        {
            for (d = 0; d < n; d++)
            {
                scanf("%d", &first[c][d]);
                sum[c][d] += first[c][d];
            }
        }
    }
    for (c = 0; c < m; c++)
    {
        for (d = 0; d < n; d++)
        {
            printf("%d\t", sum[c][d]);
        }
        printf("\n");
    }
    return 0;
}