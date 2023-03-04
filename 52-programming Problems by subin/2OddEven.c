#include <stdio.h>
#include <string.h>
int main()
{
    int t, i, x;
    scanf("%d", &t);
    char arr[101];
    for (i = 0; i < t; i++)
    {
        scanf("%s", arr);
        int x= strlen(arr);
        printf("\n");
        if (arr[x-1] % 2 == 0)
        {
            printf("Even\n");
        }
        else
            printf("Odd\n");
    }
    return 0;
}