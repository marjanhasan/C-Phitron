#include <stdio.h>
int main()
{
    int m, a, e, o, p, n;
    e = 0;
    o = 0;
    p = 0;
    n = 0;
    scanf("%d", &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            e++;
        }
        else
        {
            o++;
        }
        if (a > 0)
        {
            p++;
        }
        else if (a < 0)
        {
            n++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", e, o, p, n);

    return 0;
}