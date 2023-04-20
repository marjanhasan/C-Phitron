#include <stdio.h>
int main()
{
    long long int a, b, c, ans;
    scanf("%lld%lld%lld", &a, &b, &c);
    if (a <= b && a <= c)
    {
        ans = a;
    }
    else if (b <= a && b <= c)
    {
        ans = b;
    }
    else
    {
        ans = c;
    }
    a -= ans;
    b -= ans;
    c -= ans;
    a /= 2;
    if (a < c)
    {
        ans += a;
    }
    else
    {
        ans += c;
    }
    printf("%d\n", ans);
    return 0;
}

// min = a;
//     if (b < min)
//     {
//         min = b;
//     }

//     if (c < min)
//     {
//         min = c;
//     }