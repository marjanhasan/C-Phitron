#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char s[1001];
    scanf("%s", s);
    int cnt[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int value = s[i] - 'a';
        cnt[value]++;
    }
    for (char c = 'a'; c <= 'z'; c++)
    {
        printf("%c - %d\n", c, cnt[c - 'a']);
    }
    return 0;
}