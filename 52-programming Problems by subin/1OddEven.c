#include <stdio.h>
int odd(long long int a)
{
    if (a % 2 != 0)
        return 1;
    else
        return 0;
}
int main()
{
    long long int n, i, a;
    scanf("%lldd", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%lldd", &a);
        if (odd(a) == 1)
            printf("odd\n");
        else
            printf("Even\n");
    }
    return 0;
}