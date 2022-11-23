#include<stdio.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d ",n);
        for(int i=0;i<n-1;i++)
        {
            printf("%d ",i+1);
        }
        printf("\n");
    }
    return 0;
}
