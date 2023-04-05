// https://phitron.io/ph232/video/ph232-32-4_-sum-of-n-integers-using-recursion
// khata kolom niye diagram kore bujte hobe
#include<stdio.h>
int sum(int i,int n){
    if (i>n)return 0;
    int s= sum (i+1,n);
    return s+i;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s;
    s=sum(1,n);
    printf("\n%d\n",s);
    return 0;
}
