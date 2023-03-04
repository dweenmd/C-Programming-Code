#include <stdio.h>
int main()
{
    int n, a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a);
        printf("Case %d:", i);
        for (int j = 1; j <= a; j++)
        {
            if (a % j == 0)
            {
                printf(" %d", j);
            }
        }
        printf("\n");
    }
}