#include <stdio.h>
int main()
{
    int amount;
    int note1000, note500, note100, note50, note20, note10, note5, note2, note1;
    printf("Eanter a amount:");
    scanf("%d", &amount);

    if (amount >= 1000)
    {
        note1000 = amount / 1000;
        amount = amount - (note1000 * 1000);
        printf("1000 = %d\n", note1000);
    }
    if (amount >= 500)
    {
        note500 = amount / 500;
        amount = amount - (note500 * 500);
        printf("500 = %d\n", note500);
    }
    if (amount >= 100)
    {
        note100 = amount / 100;
        amount = amount - (note100 * 100);
        printf("100 = %d\n", note100);
    }
    if (amount >= 50)
    {
        note50 = amount / 50;
        amount = amount - (note50 * 50);
        printf("50 = %d\n", note50);
    }
    if (amount >= 20)
    {
        note20 = amount / 20;
        amount = amount - (note20 * 20);
        printf("20 = %d\n", note20);
    }
    if (amount >= 10)
    {
        note10 = amount / 10;
        amount = amount - (note10 * 10);
        printf("10 = %d\n", note10);
    }
    if (amount >= 5)
    {
        note5 = amount / 5;
        amount = amount - (note5 * 5);
        printf("5 = %d\n", note5);
    }
    if (amount >= 2)
    {
        note2 = amount / 2;
        amount = amount - (note2 * 2);
        printf("2 = %d\n", note2);
    }
    if (amount >= 1)
    {
        note1 = amount / 1;
        amount = amount - (note1 * 1);
        printf("1 = %d\n", note1);
    }

    return 0;
}
