// 3. Find the sum of a contiguous subarray within a 1 – D array of positive numbers which
// has the largest sum. (n >8)
#include <stdio.h>
int main()
{
    int n;
    printf("enter n: ");
    scanf("%d", &n);
    int sum = 0;
    int arr[n];
    printf("enter elements of array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    if (arr[0] < arr[n - 1])
    {
        sum -= arr[0];
    }
    else
    {
        sum -= arr[n - 1];
    }

    printf("max sum: %d", sum);
    return 0;
}