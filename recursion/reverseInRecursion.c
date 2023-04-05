/*
#include<stdio.h>
void solve (int i, int n)
{
    if (i>n)return;
    printf ("%d\n",i);
    solve(i+1,n);

}

int main()
{
    int n;
    scanf("%d",&n);
    solve (1,n);
    return 0;
}
*/
//uporer function er reverse function 1 ta code change korar maddomei hoye jabe
#include<stdio.h>
void solve (int i, int n)
{
    if (i>n)return;

    solve(i+1,n);
    printf ("%d\n",i);
}

int main()
{
    int n;
    scanf("%d",&n);
    solve (1,n);
    return 0;
}
