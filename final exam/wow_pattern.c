#include <stdio.h>

int main()
{
    int n, i, j, s;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        s = n - i;
        for (j = 1; j <= s; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            if (i % 2 == 1)
            {
                printf("^");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}
