#include <stdio.h>
#include <string.h>

int palindrome(char str[])
{
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[11];
    scanf("%s", str);
    int res = palindrome(str);
    if (res == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}
