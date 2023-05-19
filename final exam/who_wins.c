#include <stdio.h>

int main()
{
    int N;
    int tw = 0, pw = 0;
    long long int i, X1, X2;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%lld %lld", &X1, &X2);

        if (X1 > X2)
        {
            tw++;
        }
        else if (X2 > X1)
        {
            pw++;
        }
    }

    if (tw > pw)
    {
        printf("Tiger\n");
    }
    else if (pw > tw)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }

    return 0;
}
