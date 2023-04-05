#include<stdio.h>
void solve(int n,int i){
     if (n<i) return;
     printf("\n%d",n);
     solve(n-1,i);
}
int main()
{
    int n;
    scanf("%d",&n);
    solve(n,1);
    return 0;

}
