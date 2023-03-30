#include<stdio.h>
#include <math.h>

int main()
{
    long long int g;
    scanf("%lld",&g);
    while(g--){
        long long int n,a,x,y;
    scanf("%lld %lld",&a,&n);
    x= pow(a,n);
    printf("\n%lld",x);
    y=x%10;
    printf("\n%lld",y);
    }



    return 0;
}
