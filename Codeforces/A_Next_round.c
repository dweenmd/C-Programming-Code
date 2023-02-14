#include<stdio.h>
int  main()
{
    int n,k,l,count=0;
    scanf("%d %d",&n,&k);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    l=arr[k-1];
    // printf("%d",l);
    for(int i=0; i<n;i++){
        if (arr[i]!=0 && arr[i]>=l){
            count++;
        }
    }
    printf("%d",count);

    return 0;

}
