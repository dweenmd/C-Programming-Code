#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;

    while(n--)
    {
        char p[4];
        scanf("%s",p);
        if ((p[0]=='+'&&p[1]=='+')||(p[1]=='+'&&p[2]=='+'))
        {
            count++;
        }
        if ((p[1]=='-'&&p[2]=='-')||(p[0]=='-'&&p[1]=='-'))
        {
            count--;
        }
    }
    printf("%d",count);
    return 0;
}
