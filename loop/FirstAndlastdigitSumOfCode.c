
#include <stdio.h>
int main()
{
    int n, sum=0, firstDigit, lastDigit;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    // Find last digit of a number
    lastDigit = n % 10;
    printf("the last digit is %d\n",lastDigit);
    //Find the first digit by dividing n by 10 until n greater then 10
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    printf("the first digit is %d\n",firstDigit);
    //Calculate sum of first and last digit
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}