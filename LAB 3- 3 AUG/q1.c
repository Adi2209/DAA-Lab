#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int n;
    printf("Enter array length: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int ans = a[0];
    for (int i = 1; i < n; i++)
    {
        ans = (((a[i] * ans)) / (gcd(a[i], ans)));
    }
    printf("lcm of all the elements is : %d\n", ans);
    int flag = 0;
    int result = a[0];
    for (int i = 1; i < n; i++)
    {
        result = gcd(a[i], result);
        if (result == 1)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        printf("hcf is : 1\n");
    }
    else
    {
        printf("hcf: %d", result);
    }

    return 0;
}