#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    {
        for(j=1;j<=n-i+1; j++){
            printf("%c",n-1+j+64);
        }
       printf("\n");
    }
    return 0;
    }