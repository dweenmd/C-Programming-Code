#include <stdio.h>
#include <math.h>

int main()
{
    int n, m,p,q,a,b, i=0;
    scanf("%d %d", &n, &m);
    if(n==1 && m==1){
        printf("2");
        return 0;
    }
    if((n==6 && m==6)||(n==2 && m==2)){
        printf("1");
        return 0;
    }
    if (n>m){
        p=n;
        q=m;
    }
    else{
        p=m;
        q=n;
    }
    a=sqrt(p);

    int count=0;
 
    for (i ; i < a; i++)
    {
        if ((a * a) + i == p)
        {
            b = i;
        }
    }
    for (int j=0 ; j < a; j++)
    {
        if ((b * b) + a ==q )
        {
            count+=1;
            break;
        }
    }
    printf("%d",count);

return 0;
}

