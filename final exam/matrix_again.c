#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int j = 0; j < m; j++)
    {
        printf("%d ", arr[n - 1][j]);
    }
    printf("\n");

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i][m - 1]);
    }
    printf("%d\n", arr[n - 1][m - 1]);

    return 0;
}
