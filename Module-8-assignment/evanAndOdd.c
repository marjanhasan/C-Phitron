#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, v, even = 0, odd = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &v);
        if (v % 2 == 0)
        {
            even += v;
        }
        else
        {
            odd += v;
        }
    }
    printf("%d %d", even, odd);
    return 0;
}