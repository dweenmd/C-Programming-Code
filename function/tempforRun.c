#include <stdio.h>
int is_leap_year(int y)
{
    if ((y % 400 == 0) || (y % 4 == 0) && (y % 100 != 0))
        return 1;
    else
        return 0;
}
int main()
{
    int year;
    printf("enter a year: ");
    scanf("%d", &year);
    int x = is_leap_year(year);
    if (x == 1)
        printf("This is leap Year.");
    else
        printf("This is NOT leap Year.");

    return 0;
}