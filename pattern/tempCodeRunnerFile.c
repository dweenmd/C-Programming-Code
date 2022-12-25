#include<stdio.h>
int main()
{
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<5;J++){
            if (i==1||i==5||j==1||j==5){
                printf("%d",j);
            }
            else 
            printf(" ");
        }
    }

    return 0;
}