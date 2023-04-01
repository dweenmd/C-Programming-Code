#include <stdio.h>
int main()
{
    int i, n, x[100],flag = 0;
    printf("Number Of Student: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Mark: ");
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 30)
        {
            flag += 1;
        }

    }
    if (flag>=1)
        printf("YES %d got full marks",flag);
    else
        printf("NO");

    return 0;
}
