#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (n % 2 == 1)
    {
        int res = (n + 1) / 2;
        printf("%d\n", arr[res - 1]);
    }
    else
    {
        int res1 = n / 2;
        int res2 = res1 + 1;
        printf("%d %d\n", arr[res1 - 1], arr[res2 - 1]);
    }

    return 0;
}
