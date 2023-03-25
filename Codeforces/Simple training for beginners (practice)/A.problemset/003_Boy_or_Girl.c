#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[100], chTemp;
    int i, j, len, count = 0;
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        for (j = 0; j < (len - 1); j++)
        {
            if (str[j] > str[j + 1])
            {
                chTemp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = chTemp;
            }
        }
    }
    for (i = 0; i < len; i++)
    {
        if (str[i] != str[i + 1])
        {
            count += 1;
        }
    }
    if (count % 2 == 0)
    {
        printf("CHAT WITH HER!");
    }
    else
        printf("IGNORE HIM!");

    return 0;
}
