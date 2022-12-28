#include <stdio.h>
int main(){
    int num1,num2;
    printf("please enter a number:");
    scanf("%d",&num1);
    printf("please enter anathor number:");
    scanf("%d",&num2);
    printf("%d+%d=%d\n",num1,num2,num1+num2);
    printf("%d-%d=%d\n",num1,num2,num1-num2);
    printf("%d*%d=%d\n",num1,num2,num1*num2);
    printf("%d/%d=%d\n",num1,num2,num1/num2);
    return 0;
}
