#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        char op[2];
        scanf("%s", op);
        if (op[0] == '+'||op[1]=='+')
        {
            x++;
        }
        else
        {
            x--;
        }
    }
    printf("%d", x);
    return 0;
}
