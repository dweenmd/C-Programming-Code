#include<stdio.h>
#include<string.h>

int main()
{
     char name[10000];
    fgets(name,sizeof (name),stdin);
    int i;

        if (name[0]>='a'&& name[0]<='z')
            name[0]-=32;

    puts(name);

    return 0;
}
