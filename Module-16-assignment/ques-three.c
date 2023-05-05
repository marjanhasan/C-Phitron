#include <stdio.h>
int count_before_zero(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            return i;
        }
    }
    return n;
}
int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt = count_before_zero(arr, n);
    printf("%d\n", cnt);
    return 0;
}
