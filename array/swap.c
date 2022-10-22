#include<stdio.h>
int main(){

    int a=5,b=6;
    //with third variable
   /* int temp;
    temp=b;
    b=a;
    a=temp; */

    //without third variable
    a= a+b;
    b=a-b;
    a=a-b;
    printf("%d %d", a, b);
}
