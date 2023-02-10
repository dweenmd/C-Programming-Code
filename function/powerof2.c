#include <stdio.h>

//function prototype for checking power of two
int checkPowerofTwo(int n);

int main()
{
   int num;

   printf("Enter the number you want to test: ");
   scanf("%d", &num);

   if (checkPowerofTwo(num) == 1)
      printf("\n%d is a power of 2\n", num);
   else
      printf("\n%d is not a power of 2\n", num);

   return 0;
}

//function body
int checkPowerofTwo(int x)
{
   //checks whether a number is zero or not
   if (x == 0)
      return 0;

   //true till x is not equal to 1
   while( x != 1)
   {
      //checks whether a number is divisible by 2
      if(x % 2 != 0)
         return 0;
         x /= 2;
   }
   return 1;
}