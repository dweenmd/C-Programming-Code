#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three slids:\n");
    scanf("%d %d %d", &a, &b, &c);
    if (a != 0 && b != 0 && c != 0)
    {
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            printf("The triangle is valid");
        }
        else
        {
            printf("The triangle is not valid");
        }
    }
    else
    {
        printf("The triangle is not valid");
    }

    return 0;
}
