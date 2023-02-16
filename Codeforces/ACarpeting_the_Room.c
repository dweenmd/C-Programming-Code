#include<stdio.h>
#include<math.h>

int main(){
    int n,k,m;
    scanf("%d %d %d",&n,&k,&m);
    double result =ceil(n/m);
    if (k>=(result*2)){
        printf("YES\n",result);
    }
    else
    printf("NO\n");

    return 0;
}
