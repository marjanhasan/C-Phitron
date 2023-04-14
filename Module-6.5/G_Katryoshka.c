#include <stdio.h>
#include <limits.h>
int main()
{
    long long int eyes, mouth, body, statue = 0;
    scanf("%lld%lld%lld", &eyes, &mouth, &body);
    if (eyes <= 0 || body <= 0)
    {
        printf("%d\n", statue);
        return 0;
    }
    if (eyes <= mouth && eyes <= body)
    {
        mouth -= eyes;
        body -= eyes;
        statue += eyes;
        eyes -= eyes;
    }
    else if (mouth <= eyes && mouth <= body)
    {
        eyes -= mouth;
        body -= mouth;
        statue += mouth;
        mouth -= mouth;
    }
    else
    {
        eyes -= body;
        mouth -= body;
        statue += body;
        body -= body;
    }
    if (eyes <= 0 || body <= 0)
    {
        printf("%d\n", statue);
        return 0;
    }
    long long int temp = (eyes / 2);
    if (temp <= body)
    {
        statue += temp;
        printf("%d\n", statue);
    }
    else
    {
        statue += body;
        printf("%d\n", statue);
    }

    return 0;
}