#include <stdio.h>
int main(){
    float n;
     printf("Enter the number:");
        scanf("%f",&n);
    if (n>0)
    {
        printf("The number is positive\n");
    }
    else if (n<0)
    {
       printf("The number is negative\n");
    }
    else if (n==0)
    {
        printf("the number is zero!");
    }
    return 0;

}
