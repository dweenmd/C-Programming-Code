#include<stdio.h>
int main(){
    int a=5;
    int b=1;
    while(b<=10){
        printf("%d X %d=%d\n",a,b,a*b);
        b++;
    }
    return 0;
}