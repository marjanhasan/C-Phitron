#include <stdio.h>

int main()
{
    char str[1000];
    int cFlag = 0, smFlag = 0, spFlag = 0;

    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            cFlag++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            smFlag++;
        }
        else if (str[i] == ' ')
        {
            spFlag++;
        }
    }

    printf("Capital - %d\n", cFlag);
    printf("Small - %d\n", smFlag);
    printf("Spaces - %d\n", spFlag);

    return 0;
}
