#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &a);
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
}