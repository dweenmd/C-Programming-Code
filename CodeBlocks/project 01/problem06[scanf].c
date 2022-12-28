#include <stdio.h>
int main(){
    float num1,num2;
    printf("please enter a number:");
    scanf("%f",&num1);
    printf("please enter anathor number:");
    scanf("%f",&num2);
    printf("%f+%f=%f\n",num1,num2,num1+num2);
    printf("%f-%f=%f\n",num1,num2,num1-num2);
    printf("%f*%f=%f\n",num1,num2,num1*num2);
    printf("%f/%f=%f\n",num1,num2,num1/num2);
    return 0;
}
