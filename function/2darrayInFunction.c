#include <stdio.h>
void printcell(int a[][4], int n);
int main()
{
    int n = 3;
    int a[4][4];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            a[i][j] = -1;
        }
    }
    printcell(a,n);
}


void printcell(int a[][4], int n)
{

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
                printf("%d",a[i][j]);
            if (j < n)
                printf("\t|\t");
        }
        printf("\n");
        if (i < n)
            printf("-----------------------------------");
        printf("\n");
    }
}
