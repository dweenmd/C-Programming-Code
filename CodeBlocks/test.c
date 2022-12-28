#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three number:");
    scanf("%d %d %d", &a,&b,&c);
    if(a==b==c){
        printf("They are equal : %d %d %d",a,b,c);
    }
    else if(a>b && a>c){
        printf("The largest number is : %d",a);
    }
    else if (b>c){
        printf("The largest number is : %d",b);
    }
    else {
    printf("The largest number is : %d",c);
    }
    return 0;
}
