#include<stdio.h>
#include<string.h>

int main()
{
    char name[100000];
    long t;
    scanf("%ld",&t);
    while (t--){
    scanf("%s",name);
    int l = strlen(name);
    if (l>10)
    {
        printf("%c%d%c\n",name[0],l-2,name[l-1]);
    }
    else
    {
        puts(name);
        printf("\n");
    }

    }

    return 0;
}
