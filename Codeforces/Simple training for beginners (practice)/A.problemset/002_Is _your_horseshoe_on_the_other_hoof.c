#include<stdio.h>
int main()
{
    long long int arr[4];
    int count=0;
    for (int i=0; i<4; i++)
    {
        scanf("%lld",&arr[i]);
    }
    //sorting
    for (int j=0; j<3; j++)
    {

        for (int i=0; i<3; i++)
        {
            //compare korbo arr[i] and arr[i+1] er moddhe

            if (arr[i]>arr[i+1])
            {
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }

        }

    }


    for (int i= 0; i<3; i++)
    {
        if (arr[i]==arr[i+1])
        {
            count ++;
        }
    }
    printf("%d",count);


    return 0;
}
