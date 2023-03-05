#include <stdio.h>
int main()
{
    int n, a, r;
    scanf("%d", &n);
    while (n--)
    {
        int sum = 0;
        scanf("%d", &a);
        for (int i = 0; i < 5; i++)
        {
            if ((i == 0) || (i == 4))
            {
                r = a % 10;
                sum += r;
            }
            a /= 10;
        }
        printf("Sum = %d\n", sum);
    }
}