#include <stdio.h>
#include <string.h>

int main()
{
    int n, x=0;
    char s1[4]="X++";
    char s2[4]="++X";
    scanf("%d", &n);

    char s[4];
    while (n--)
    {
        scanf("%s", s);
        if (strcmp(s, s1)==0||strcmp(s, s2)==0)
        {
            ++x;
        }
        else
        {
            - -x;
        }
    }

    printf("%d\n", x);
    return 0;
}
