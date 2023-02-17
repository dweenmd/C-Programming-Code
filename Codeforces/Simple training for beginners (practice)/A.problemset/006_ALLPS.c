// the solve of llps in codeforce problem
#include <stdio.h>
#include <string.h>
int main()
{
    char dween[20];
    scanf("%s", dween);
    int size = strlen(dween);
    // printf("%d\n", size);
    //  puts(dween);
    for (int i = 0; i < (size); i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (dween[j] > dween[j + 1])
            {
                char temp = dween[j];
                dween[j] = dween[j + 1];
                dween[j + 1] = temp;
            }
        }
    }
    // puts(dween);
    int max = dween[size - 1];
    for (int i = 0; i < size; i++)
    {
        if (dween[i] == max)
        {
            printf("%c", max);
        }
    }
    return 0;
}
