#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int t = a / 1000;
    if (t % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}