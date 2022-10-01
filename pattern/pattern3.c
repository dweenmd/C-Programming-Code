 #include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n; i++)
    {
        for(j=1;j<=n; j++){
            if(j<i){
                printf("%2d", n+j-i);
            }
            else{
                printf("%2d", n);
            }
        }
       printf("\n");
    }
    return 0;
    }