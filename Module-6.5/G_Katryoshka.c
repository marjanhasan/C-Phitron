#include <stdio.h>
#include <limits.h>
int main()
{
    long long int a, b, c, body = 0;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a <= 0 || c <= 0)
    {
        printf("%d\n", body);
        return 0;
    }
    if (a <= b && a <= c)
    {
        b -= a;
        c -= a;
        body += a;
        a -= a;
    }
    else if (b <= a && b <= c)
    {
        a -= b;
        c -= b;
        body += b;
        b -= b;
    }
    else
    {
        a -= c;
        b -= c;
        body += c;
        c -= c;
    }
    if (a <= 0 || c <= 0)
    {
        printf("%d\n", body);
        return 0;
    }
    a /= 2;
    if (a < c)
    {
        c -= a;
        body += a;
        a -= a;
    }
    else
    {
        a -= c;
        body += c;
        c -= c;
    }
    if (a <= 0 || c <= 0)
    {
        printf("%d\n", body);
    }
    return 0;
}