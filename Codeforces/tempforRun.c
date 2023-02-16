#include <stdio.h>
#include <math.h>

int main()
{
    int n, m, count = 0 ,p,a,b, i=0;
    scanf("%d %d", &n, &m);
    if (n>m){
        p=n;
    }
    else{
        p=m;
    }
    a=sqrt(p);
    for (i ; i < p; i++)
    {
        if ((a * a) + i == n)
        {
            b = i;
            printf("%d\n",b);
        }
    }
    for (int j=0 ; j < (p); j++)
    {
        if ((b * b) + a == m)
        {
            count ++;
         
        }
    }
    printf("%d",count);

return 0;
}

