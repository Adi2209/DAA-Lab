// Write a program to find the total number of subset and proper subset of n element also specify the elements of subsets (n >8 )

#include <stdio.h>

void subarray(int arr[], int n)
{
    int count = 0;
    for (int len = 1; len <= n; len++)
    {
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len-1;
            printf("subset : ");
            for (int k = i; k <= j; k++)
            {
                printf("%d", arr[k]);
            }

            printf("\n");
            count++;
        }
    }
    printf("Total number of subsets are: %d\n", count+1);
    printf("Total number of proper subsets are: %d", count);
}

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    subarray(arr, n);
    return 0;
}