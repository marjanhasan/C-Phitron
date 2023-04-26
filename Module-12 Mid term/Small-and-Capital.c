#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001];
    scanf("%s", s);
    int cap = 0, sm = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cap++;
        }
        else
        {
            sm++;
        }
    }
    printf("%d %d\n", cap, sm);
    return 0;
}