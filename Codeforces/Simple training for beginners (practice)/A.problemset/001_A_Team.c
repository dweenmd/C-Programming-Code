#include<stdio.h>
int main()
{
    int n,count=0;
    int arr[3];
    scanf("%d",&n);
    while(n--)
    {
        for (int i=0; i<3; i++)
        {
            scanf("%d", &arr[i]);

        }
        if ((arr[0]+arr[1]+arr[2])>=2)
        {
            count+=1;
        }

    }
    printf("%d", count);


    return 0;
}

