#include <stdio.h>
int main()
{

    int count = 1;
    for (int i = 1000; i > 0; i--)
    {
        printf("%d\t", i);
        if (count % 5 == 0)
        {
            printf("\n");
        }
        count++;
    }
}