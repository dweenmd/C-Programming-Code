#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n,i;
        scanf("%d",&n);
        int input[n];
        for (i=0;i<n;i++){
            scanf ("%d",&input[i]);
        }
        for (i=1; i<=n; i++){
            if(input[i]==input[i+1]){
            continue;
           }
           else if(input[i]!=input[i+1])
           printf("%d",(i));
           break;}
        }
        printf("\n");


    return 0;
}


