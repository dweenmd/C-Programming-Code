
//there is a problem with this __code 

#include <stdio.h>

void bubble_sort(long[], long);

int main()
{
    long array[100], n, c, d, swap;

    printf("Enter number of elements\n");
    scanf("%ld", &n);

    printf("Enter %ld longegers\n", n);

    for (c = 0; c < n; c++)
        scanf("%ld", &array[c]);

    bubble_sort(array, n);

    printf("Sorted list in ascending order:\n");

    for (c = 0; c < n; c++)
        printf("%ld\n", array[c]);

    return 0;
}

void bubble_sort(long list[], long n)
{
    long i, j, t;

    for (i = 0; i < (n - 1); i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (list[j] > list[j + 1])
            {
                /* Swapping */

                t = list[j];
                list[j] = list[j + 1];
                list[j + 1] = t;
            }
        }
    }
}
